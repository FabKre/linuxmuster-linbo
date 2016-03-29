#ifndef LINBOGUI_H
#define LINBOGUI_H

#include <QMainWindow>
#include <qstring.h>
#include <QProcess>
#include <QTimer>
#include <QTextEdit>
#include <qdatetime.h>
#include <qtimer.h>

#include <vector>
#include <fstream>
#include <istream>

#include "configuration.h"
#include "command.h"
#include "image_description.h"
#include "linboLogConsole.h"
#include "linboProgress.h"

#define ADMINTAB ui->systeme->count()-2
#define LOGTAB ui->systeme->count()-1

namespace Ui {
class LinboGUI;
}

class linboLogConsole;
class linboProgress;

class LinboGUI : public QMainWindow
{
    Q_OBJECT
private:
    Configuration* conf;
    Command* command;
    QTimer* myAutostartTimer;
    QString linestdout, linestderr;
    QString logfilepath, fonttemplate;
    bool root, withicons, outputvisible;
    QProcess* process;
    linboProgress* progress;
    QPushButton *autostart, *autopartition, *autoinitcache;
    int preTab, autostarttimeout, roottimeout, logoutTimer;
    linboLogConsole* logConsole;

    void showInfos();
    void showOSs();
    void showImages();

public:
    globals config();

    bool isRoot() const;
    void showImagingTab();
    void log( const QString& data );

    explicit LinboGUI(QWidget *parent = 0);
    ~LinboGUI();

    void readFromStdout();
    void readFromStderr();
    void resetButtons();
    bool isAdminTab(int tabIndex);
    bool isLogTab(int tabIndex);

public slots:
    void do_register(QString& roomName, QString& clientName, QString& ipAddress, QString& clientGroup);
    void restoreButtonsState();
    void disableButtons();
    void enableButtons();
    void performLogin(QString passwd);
    void performLogout();

private slots:


    void on_halt_clicked();

    void on_reboot_clicked();

    void on_update_clicked();

    void on_systeme_currentChanged(int index);

    void on_doregister_clicked();

    void on_logout_clicked();

    void on_cbTimeout_toggled(bool checked);

    void on_console_clicked();

protected:
    void timerEvent(QTimerEvent *event);

private:
    void doCommand(const QStringList& command, bool interruptible = false);
    Ui::LinboGUI *ui;
};

#endif // LINBOGUI_H

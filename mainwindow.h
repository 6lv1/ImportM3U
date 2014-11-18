#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void copySourceM3UToDestination();
private slots:
    void on_mp_pushButtonChooseSourceDirectory_clicked();

    void on_mp_pushButtonChooseDestinationDirectory_clicked();

    void on_mp_pushButtonCopy_clicked();

    void on_mp_pushButtonCheckDestination_clicked();

    void on_mp_pushButtonListUnusedSourceDirectory_clicked();

private:
    Ui::MainWindow *ui;
    void copyM3UFile(const QString &p_m3ufile);
    void checkM3UFiles(const QString &p_m3ufile);
    static QStringList getM3UFiles(const QString &p_directory);
    static QStringList extractFilesFromM3U(const QString &p_filename);
};

#endif // MAINWINDOW_H

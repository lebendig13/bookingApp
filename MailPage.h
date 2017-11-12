#ifndef MAILPAGE_H
#define MAILPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QWebEngineView;
class QLineEdit;
QT_END_NAMESPACE

namespace Ui {
class MailPage;
}

class MailPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MailPage(const QUrl& url, QWidget *parent = 0);
    ~MailPage();

public slots:
    void renewPage();

protected slots:

    void adjustLocation();
    void changeLocation();
    void adjustTitle();
    void setProgress(int p);
    void finishLoading(bool);

    void viewSource();

    void highlightAllLinks();
    void rotateImages(bool invert);
    void removeGifImages();
    void removeInlineFrames();
    void removeObjectElements();
    void removeEmbeddedElements();

private:
    QString jQuery;
    QWebEngineView *view;
    QLineEdit *locationEdit;
    QAction *rotateAction;
    int progress;

private:
    Ui::MailPage *ui;
};

#endif // MAILPAGE_H

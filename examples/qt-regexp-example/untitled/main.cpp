#include <QCoreApplication>

#include <QDebug>
#include <QString>
#include <QRegExp>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString baseString("{sdffwef3434g334g34g34g-3434g35hksdlflerg}");

    QRegExp r("[\\w]+(?=\\W)");

    if (r.indexIn(baseString) >= 0) {
        qDebug() << "Found id:" << r.cap();
    }

    qDebug() << "base" << baseString;
    return a.exec();
}

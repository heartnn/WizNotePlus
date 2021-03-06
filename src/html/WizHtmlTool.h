#ifndef HTML_WIZHTMLTOOL_H
#define HTML_WIZHTMLTOOL_H

#include <QString>
#include <QStringList>

namespace Utils {

    QStringList WizHtmlExtractTags(
        const QString &htmlText,
        const QString &tagName,
        const QString &tagAttributeName = "",
        const QString &tagAttributeValue = "");

    QString WizHtmlInsertText(
        const QString &htmlText,
        const QString &text,
        const QString &position,
        const QString &tagName,
        const QString &tagAttributeName = "",
        const QString &tagAttributeValue = "");

    QString WizHtmlGetContent(const QString &htmlText);
    QString WizHtmlGetPureText(const QString &htmlText);
}

#endif // HTML_WIZHTMLTOOL_H
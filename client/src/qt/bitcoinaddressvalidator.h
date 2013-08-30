#ifndef PARABOLAADDRESSVALIDATOR_H
#define PARABOLAADDRESSVALIDATOR_H

#include <QValidator>

/** Base48 entry widget validator.
   Corrects near-miss characters and refuses characters that are no part of base48.
 */
class ParabolaAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ParabolaAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // PARABOLAADDRESSVALIDATOR_H

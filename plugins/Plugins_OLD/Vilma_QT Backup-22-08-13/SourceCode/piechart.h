/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the documentation of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef PIECHART_H
#define PIECHART_H
#include "VilmaControler.h"
#include <QtQuick/QQuickPaintedItem>
#include <QColor>
#include <QTimer>


//![0]
class Vilma_controler : public QQuickItem
{


//![0]
    Q_OBJECT
    Q_PROPERTY(QString gas_joint READ gas_joint WRITE setGas_joint)
    Q_PROPERTY(QString brake_joint READ brake_joint WRITE setBrake_joint)
    Q_PROPERTY(QString hand_brake_joint READ hand_brake_joint WRITE setHand_brake_joint)
    Q_PROPERTY(QString steering_joint READ steering_joint WRITE setSteering_joint)
    Q_PROPERTY(QColor color READ color WRITE setColor)
//![1]
//!


public:
//![1]

    Vilma_controler(QQuickItem *parent = 0);

    QString gas_joint() const;

    QString brake_joint() const;

    QString hand_brake_joint() const;

    QString steering_joint() const;

    QColor color() const;
    void setColor(const QColor &color);


//![2]

  //  Q_INVOKABLE void update_vilma_info();
    Q_INVOKABLE void setGas_joint(const QString &name);
    Q_INVOKABLE void setBrake_joint(const QString &name);
    Q_INVOKABLE void setHand_brake_joint(const QString &name);
    Q_INVOKABLE void setSteering_joint(const QString &name);
    Q_INVOKABLE void accelerate();
    Q_INVOKABLE void deaccelerate();
    Q_INVOKABLE void use_hand_brake();
    Q_INVOKABLE void use_Steering(float value);
    Q_INVOKABLE void use_brake_push();
    Q_INVOKABLE void use_brake_release();


public slots:
    void update_vilma_info();

signals:
    void gas_jointChanged();
    void brake_jointChanged();
    void hand_brake_jointChanged();
    void steering_jointChanged();
    void updated_info();
    void timeout();

//![2]

private:
    QString gas_joint_value;
    QString brake_joint_value;
    QString hand_brake_joint_value;
    QString steering_joint_value;
    QColor m_color;

//![3]
};
//![3]

#endif


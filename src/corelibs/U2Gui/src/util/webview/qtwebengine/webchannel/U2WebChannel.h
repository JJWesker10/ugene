/**
 * UGENE - Integrated Bioinformatics Tools.
 * Copyright (C) 2008-2019 UniPro <ugene@unipro.ru>
 * http://ugene.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef _U2_WEB_CHANNEL_H_
#define _U2_WEB_CHANNEL_H_

#include <QWebChannel>

class QWebEnginePage;

namespace U2 {

class U2WebChannel : public QObject {
    Q_OBJECT
public:
    U2WebChannel(QWebEnginePage *page);

    void registerObject(const QString &id, QObject *object);

    int getPort() const;

    static const int INVALID_PORT;

private:
    QWebChannel *channel;
    int port;
};

}   // namespace U2

#endif // _U2_WEB_CHANNEL_H_
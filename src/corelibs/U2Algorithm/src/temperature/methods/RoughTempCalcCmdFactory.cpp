/**
 * UGENE - Integrated Bioinformatics Tools.
 * Copyright (C) 2008-2022 UniPro <ugene@unipro.ru>
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

#include "RoughTempCalc.h"
#include "RoughTempCalcCmdFactory.h"

namespace U2 {

const QString RoughTempCalcCmdFactory::ID = "Rough";

RoughTempCalcCmdFactory::RoughTempCalcCmdFactory()
    : TempCalcFactory(ID) {}

QSharedPointer<BaseTempCalc> RoughTempCalcCmdFactory::createTempCalculator(const TempCalcSettings& settings) const {
    return QSharedPointer<BaseTempCalc>(new RoughTempCalc(settings));
}

QSharedPointer<BaseTempCalc> RoughTempCalcCmdFactory::createDefaultTempCalculator() const {
    return createTempCalculator(createDefaultTempCalcSettings());
}

TempCalcSettings RoughTempCalcCmdFactory::createDefaultTempCalcSettings() const {
    TempCalcSettings settings;
    settings.insert(BaseTempCalc::KEY_ID, ID);
    return settings;
}

BaseTempCalcWidget* RoughTempCalcCmdFactory::createTempCalcSettingsWidget(QWidget*, const QString&) const {
    return nullptr;
}

}

/*
    Copyright (c) 2003 Patrick Julien <freak@codepimps.org>
    Copyright (c) 2005 Boudewijn Rempt <boud@valdyas.org>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include "kis_resource.h"
#include "kis_global.h"

KisResource::KisResource(const QString& filename)
{
    m_filename = filename;
    m_valid = false;
}

KisResource::~KisResource()
{
}

QString KisResource::filename() const
{
    return m_filename;
}

void KisResource::setFilename(const QString& filename)
{
    m_filename = filename;
}

QString KisResource::name() const
{
    return m_name;
}

void KisResource::setName(const QString& name)
{
    m_name = name;
}

bool KisResource::valid() const
{
    return m_valid;
}

void KisResource::setValid(bool valid)
{
    m_valid = valid;
}

#include "kis_resource.moc"


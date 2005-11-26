/*
 *  Copyright (c) 2005 Cyrille Berger <cberger@cberger.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef KROSS_KRITACOREKRSLAYER_H
#define KROSS_KRITACOREKRSLAYER_H

#include <api/class.h>

#include <kis_types.h>

namespace Kross {

namespace KritaCore {

/**
@author Cyrille Berger
*/
class Layer : public Kross::Api::Class<Layer>
{
    public:
        explicit Layer(KisLayerSP layer);
        virtual ~Layer();
        virtual const QString getClassName() const;
    private:
        Kross::Api::Object::Ptr createRectIterator(Kross::Api::List::Ptr);
        Kross::Api::Object::Ptr createHLineIterator(Kross::Api::List::Ptr);
        Kross::Api::Object::Ptr createVLineIterator(Kross::Api::List::Ptr);
        Kross::Api::Object::Ptr getWidth(Kross::Api::List::Ptr);
        Kross::Api::Object::Ptr getHeight(Kross::Api::List::Ptr);
    private:
        KisLayerSP m_layer;
};

}

}

#endif

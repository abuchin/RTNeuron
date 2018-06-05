/* Copyright (c) 2006-2018, École Polytechnique Fédérale de Lausanne (EPFL) /
 *                           Blue Brain Project and
 *                          Universidad Politécnica de Madrid (UPM)
 *                          Juan Hernando <juan.hernando@epfl.ch>
 *
 * This file is part of RTNeuron <https://github.com/BlueBrain/RTNeuron>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 3.0 as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef RTNEURON_API_UI_EVENTHANDLER_H
#define RTNEURON_API_UI_EVENTHANDLER_H

namespace bbp
{
namespace rtneuron
{
namespace osgEq
{
class EventAdapter;
class View;
}

/**
 * Base class for a handler of events emitted by the application.
 */
class EventHandler
{
public:
    EventHandler() {}
    virtual ~EventHandler() {}
    /**
     * The handler for any application event.
     *
     * @param event the event to handle generated by the application
     * @param view the view which received the event
     * @return true if the event was handled to skip subsequent handlers
     */
    virtual bool handle(const osgEq::EventAdapter& event,
                        const osgEq::View& view) = 0;
};
}
}

#endif
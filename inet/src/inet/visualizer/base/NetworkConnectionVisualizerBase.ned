//
// Copyright (C) 2016 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

package inet.visualizer.base;

//
// This is a base module for connection visualizer simple modules. The actual
// visualization of network connections is done in derived modules.
//
// @see ~NetworkConnectionCanvasVisualizer, ~NetworkConnectionOsgVisualizer,
// ~INetworkConnectionVisualizer, and ~NetworkConnectionVisualizerBase
//
simple NetworkConnectionVisualizerBase extends VisualizerBase
{
    parameters:
        string networkNodePathFilter = default("**"); // determines which network connections are displayed, all connections by default
        string lineColor = default("black"); // connection line color
        double lineWidth = default(1); // connection line width
        @class(NetworkConnectionVisualizerBase);
}

/**
* @file
*
* @section LICENSE
*
* OsmAnd - Android navigation software based on OSM maps.
* Copyright (C) 2010-2013  OsmAnd Authors listed in AUTHORS file
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _OSMAND_CORE_OBF_MAP_SECTION_READER_METRICS_H_
#define _OSMAND_CORE_OBF_MAP_SECTION_READER_METRICS_H_

#include <OsmAndCore/stdlib_common.h>
#include <functional>

#include <OsmAndCore/QtExtensions.h>

#include <OsmAndCore.h>
#include <OsmAndCore/CommonTypes.h>
#include <OsmAndCore/Map/MapTypes.h>

namespace OsmAnd {

    namespace ObfMapSectionReader_Metrics {

        struct Metric_loadMapObjects
        {
            inline Metric_loadMapObjects()
            {
                memset(this, 0, sizeof(Metric_loadMapObjects));
            }

            // Number of visited levels
            unsigned int visitedLevels;

            // Number of accepted levels
            unsigned int acceptedLevels;

            // Number of visited tree nodes
            unsigned int visitedNodes;

            // Number of accepted tree nodes
            unsigned int acceptedNodes;

            // Elapsed time for tree nodes (in seconds)
            float elapsedTimeForNodes;

            // Number of MapObjectBlock read
            unsigned int mapObjectsBlocksRead;

            // Number of visited MapObjects
            unsigned int visitedMapObjects;

            // Number of accepted MapObjects (before filtering)
            unsigned int acceptedMapObjects;

            // Elapsed time for MapObjects (in seconds)
            float elapsedTimeForMapObjectsBlocks;

            // Elapsed time for only-visited MapObjects (in seconds)
            float elapsedTimeForOnlyVisitedMapObjects;

            // Elapsed time for only-accepted MapObjects (in seconds)
            float elapsedTimeForOnlyAcceptedMapObjects;
        };

    } // namespace ObfMapSectionReader_Metrics

} // namespace OsmAnd

#endif // _OSMAND_CORE_OBF_MAP_SECTION_READER_METRICS_H_

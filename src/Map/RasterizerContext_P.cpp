#include "RasterizerContext_P.h"
#include "RasterizerContext.h"

#include <SkPathEffect.h>

OsmAnd::RasterizerContext_P::RasterizerContext_P( RasterizerContext* owner_ )
    : owner(owner_)
{
}

OsmAnd::RasterizerContext_P::~RasterizerContext_P()
{
    clear();
}

void OsmAnd::RasterizerContext_P::cleanupMapObjects()
{
    _mapObjects.clear();
    _coastlineObjects.clear();
    _basemapMapObjects.clear();
    _basemapCoastlineObjects.clear();
    _triangulatedCoastlineObjects.clear();

    _combinedMapObjects.clear();
}

void OsmAnd::RasterizerContext_P::clear()
{
    cleanupMapObjects();

    _polygons.clear();
    _lines.clear();
    _points.clear();
    _symbols.clear();
}

#include "MapStyleEvaluationResult.h"
#include "MapStyleEvaluationResult_P.h"

OsmAnd::MapStyleEvaluationResult::MapStyleEvaluationResult()
    : _d(new MapStyleEvaluationResult_P(this))
{
}

OsmAnd::MapStyleEvaluationResult::~MapStyleEvaluationResult()
{
}

bool OsmAnd::MapStyleEvaluationResult::getBooleanValue(const int valueDefId, bool& value) const
{
    const auto itValue = _d->_values.constFind(valueDefId);
    if(itValue == _d->_values.cend())
        return false;

    value = itValue->toBool();
    return true;
}

bool OsmAnd::MapStyleEvaluationResult::getIntegerValue(const int valueDefId, int& value) const
{
    const auto itValue = _d->_values.constFind(valueDefId);
    if(itValue == _d->_values.cend())
        return false;

    value = itValue->toInt();
    return true;
}

bool OsmAnd::MapStyleEvaluationResult::getIntegerValue(const int valueDefId, unsigned int& value) const
{
    const auto itValue = _d->_values.constFind(valueDefId);
    if(itValue == _d->_values.cend())
        return false;

    value = itValue->toUInt();
    return true;
}

bool OsmAnd::MapStyleEvaluationResult::getFloatValue(const int valueDefId, float& value) const
{
    const auto itValue = _d->_values.constFind(valueDefId);
    if(itValue == _d->_values.cend())
        return false;

    value = itValue->toFloat();
    return true;
}

bool OsmAnd::MapStyleEvaluationResult::getStringValue(const int valueDefId, QString& value) const
{
    const auto itValue = _d->_values.constFind(valueDefId);
    if(itValue == _d->_values.cend())
        return false;

    value = itValue->toString();
    return true;
}

void OsmAnd::MapStyleEvaluationResult::clear()
{
    _d->_values.clear();
}

void OsmAnd::MapStyleEvaluationResult::pack(PackedResult& packedResult)
{
    packedResult.reserve(_d->_values.size());
    for(auto itEntry = _d->_values.cbegin(); itEntry != _d->_values.cend(); ++itEntry)
        packedResult.push_back(qMove(PackedResultEntry(itEntry.key(), itEntry.value())));
}

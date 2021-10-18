#include "InfoVideo.h"

InfoVideo::InfoVideo()
{
    loaded =false;
}

bool InfoVideo::setDuration(QTime qt)
{
    duration=qt;
}

QTime *InfoVideo::getDuration(QGst::PipelinePtr pipe)
{
    return &duration;
}

bool InfoVideo::setPosition(QTime qt)
{
    position=qt
}

QTime InfoVideo::getPosition(QGst::PipelinePtr pipe)
{
	return QGst::ClockTime(position).toTime();
}

bool InfoVideo::getLoaded(QGst::PipelinePtr pipe)
{
    return &loaded;
}

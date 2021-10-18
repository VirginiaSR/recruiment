#ifndef INFOVIDEO_H
#define INFOVIDEO_H

#include <QObject>
#include <QTime>

#include <memory>

#include <QGst/pipeline.h>

class InfoVideo
{
public:
    InfoVideo();
    
    bool setDuration(QTime qt);
    QTime *getDuration(QGst::PipelinePtr pipe);
    bool setPosition(QTime qt);
    QTime getPosition(QGst::PipelinePtr pipe)
    bool getLoaded(QGst::PipelinePtr pipe);

private:
   bool loaded;
   QTime duration;
   QTime position;

};

#endif /

/* Autogenerated with kurento-module-creator */

#ifndef __OPEN_CVFILTER_IMPL_HPP__
#define __OPEN_CVFILTER_IMPL_HPP__

#include "FilterImpl.hpp"
#include "OpenCVFilter.hpp"
#include <EventHandler.hpp>
#include "OpenCVProcess.hpp"

namespace kurento
{

class MediaPipeline;
class OpenCVFilterImpl;

void Serialize (std::shared_ptr<OpenCVFilterImpl> &object,
                JsonSerializer &serializer);

class OpenCVFilterImpl : public FilterImpl, public virtual OpenCVFilter,
  public virtual OpenCVProcess
{

public:

  OpenCVFilterImpl (const boost::property_tree::ptree &conf,
                    std::shared_ptr<MediaPipeline> mediaPipeline);

  virtual ~OpenCVFilterImpl () {};

  /* Next methods are automatically implemented by code generator */
  virtual bool connect (const std::string &eventType,
                        std::shared_ptr<EventHandler> handler);

  virtual void invoke (std::shared_ptr<MediaObjectImpl> obj,
                       const std::string &methodName, const Json::Value &params,
                       Json::Value &response);

  virtual void Serialize (JsonSerializer &serializer);

private:

  GstElement *opencvfilter;

  class StaticConstructor
  {
  public:
    StaticConstructor();
  };

  static StaticConstructor staticConstructor;

};

} /* kurento */

#endif /*  __OPEN_CVFILTER_IMPL_HPP__ */
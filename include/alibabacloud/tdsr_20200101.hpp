// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TDSR20200101_H_
#define ALIBABACLOUD_TDSR20200101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Tdsr20200101 {
class GetSingleConnDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetSingleConnDataRequest() {}

  explicit GetSingleConnDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetSingleConnDataRequest() = default;
};
class GetSingleConnDataResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> mapId{};
  shared_ptr<string> type{};

  GetSingleConnDataResponseBodyList() {}

  explicit GetSingleConnDataResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mapId) {
      res["MapId"] = boost::any(*mapId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MapId") != m.end() && !m["MapId"].empty()) {
      mapId = make_shared<string>(boost::any_cast<string>(m["MapId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSingleConnDataResponseBodyList() = default;
};
class GetSingleConnDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> version{};
  shared_ptr<vector<GetSingleConnDataResponseBodyList>> list{};

  GetSingleConnDataResponseBody() {}

  explicit GetSingleConnDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetSingleConnDataResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSingleConnDataResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetSingleConnDataResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~GetSingleConnDataResponseBody() = default;
};
class GetSingleConnDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSingleConnDataResponseBody> body{};

  GetSingleConnDataResponse() {}

  explicit GetSingleConnDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSingleConnDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSingleConnDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetSingleConnDataResponse() = default;
};
class GetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskStatusRequest() {}

  explicit GetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusRequest() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class GetSceneDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  GetSceneDataRequest() {}

  explicit GetSceneDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetSceneDataRequest() = default;
};
class GetSceneDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetSceneDataResponseBody() {}

  explicit GetSceneDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSceneDataResponseBody() = default;
};
class GetSceneDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSceneDataResponseBody> body{};

  GetSceneDataResponse() {}

  explicit GetSceneDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSceneDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSceneDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetSceneDataResponse() = default;
};
class LinkImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> cameraHeight{};

  LinkImageRequest() {}

  explicit LinkImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (cameraHeight) {
      res["CameraHeight"] = boost::any(*cameraHeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("CameraHeight") != m.end() && !m["CameraHeight"].empty()) {
      cameraHeight = make_shared<long>(boost::any_cast<long>(m["CameraHeight"]));
    }
  }


  virtual ~LinkImageRequest() = default;
};
class LinkImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> resourceId{};

  LinkImageResponseBody() {}

  explicit LinkImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~LinkImageResponseBody() = default;
};
class LinkImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LinkImageResponseBody> body{};

  LinkImageResponse() {}

  explicit LinkImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LinkImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LinkImageResponseBody>(model1);
      }
    }
  }


  virtual ~LinkImageResponse() = default;
};
class AddSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  AddSceneRequest() {}

  explicit AddSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~AddSceneRequest() = default;
};
class AddSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};

  AddSceneResponseBody() {}

  explicit AddSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~AddSceneResponseBody() = default;
};
class AddSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSceneResponseBody> body{};

  AddSceneResponse() {}

  explicit AddSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSceneResponseBody>(model1);
      }
    }
  }


  virtual ~AddSceneResponse() = default;
};
class UpdateConnDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};
  shared_ptr<string> connData{};

  UpdateConnDataRequest() {}

  explicit UpdateConnDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (connData) {
      res["ConnData"] = boost::any(*connData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("ConnData") != m.end() && !m["ConnData"].empty()) {
      connData = make_shared<string>(boost::any_cast<string>(m["ConnData"]));
    }
  }


  virtual ~UpdateConnDataRequest() = default;
};
class UpdateConnDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  UpdateConnDataResponseBody() {}

  explicit UpdateConnDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateConnDataResponseBody() = default;
};
class UpdateConnDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConnDataResponseBody> body{};

  UpdateConnDataResponse() {}

  explicit UpdateConnDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConnDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConnDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConnDataResponse() = default;
};
class BucketIsExistRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};

  BucketIsExistRequest() {}

  explicit BucketIsExistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~BucketIsExistRequest() = default;
};
class BucketIsExistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> isExist{};

  BucketIsExistResponseBody() {}

  explicit BucketIsExistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (isExist) {
      res["IsExist"] = boost::any(*isExist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("IsExist") != m.end() && !m["IsExist"].empty()) {
      isExist = make_shared<bool>(boost::any_cast<bool>(m["IsExist"]));
    }
  }


  virtual ~BucketIsExistResponseBody() = default;
};
class BucketIsExistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BucketIsExistResponseBody> body{};

  BucketIsExistResponse() {}

  explicit BucketIsExistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BucketIsExistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BucketIsExistResponseBody>(model1);
      }
    }
  }


  virtual ~BucketIsExistResponse() = default;
};
class RectifyImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<long> cameraHeight{};

  RectifyImageRequest() {}

  explicit RectifyImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (cameraHeight) {
      res["CameraHeight"] = boost::any(*cameraHeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("CameraHeight") != m.end() && !m["CameraHeight"].empty()) {
      cameraHeight = make_shared<long>(boost::any_cast<long>(m["CameraHeight"]));
    }
  }


  virtual ~RectifyImageRequest() = default;
};
class RectifyImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};
  shared_ptr<string> subSceneId{};

  RectifyImageResponseBody() {}

  explicit RectifyImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~RectifyImageResponseBody() = default;
};
class RectifyImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RectifyImageResponseBody> body{};

  RectifyImageResponse() {}

  explicit RectifyImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RectifyImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RectifyImageResponseBody>(model1);
      }
    }
  }


  virtual ~RectifyImageResponse() = default;
};
class LabelBuildRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  LabelBuildRequest() {}

  explicit LabelBuildRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~LabelBuildRequest() = default;
};
class LabelBuildResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};

  LabelBuildResponseBody() {}

  explicit LabelBuildResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~LabelBuildResponseBody() = default;
};
class LabelBuildResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LabelBuildResponseBody> body{};

  LabelBuildResponse() {}

  explicit LabelBuildResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LabelBuildResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LabelBuildResponseBody>(model1);
      }
    }
  }


  virtual ~LabelBuildResponse() = default;
};
class DropSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DropSceneRequest() {}

  explicit DropSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DropSceneRequest() = default;
};
class DropSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  DropSceneResponseBody() {}

  explicit DropSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DropSceneResponseBody() = default;
};
class DropSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DropSceneResponseBody> body{};

  DropSceneResponse() {}

  explicit DropSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DropSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DropSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DropSceneResponse() = default;
};
class OptimizeRightAngleRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  OptimizeRightAngleRequest() {}

  explicit OptimizeRightAngleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~OptimizeRightAngleRequest() = default;
};
class OptimizeRightAngleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};

  OptimizeRightAngleResponseBody() {}

  explicit OptimizeRightAngleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OptimizeRightAngleResponseBody() = default;
};
class OptimizeRightAngleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OptimizeRightAngleResponseBody> body{};

  OptimizeRightAngleResponse() {}

  explicit OptimizeRightAngleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OptimizeRightAngleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OptimizeRightAngleResponseBody>(model1);
      }
    }
  }


  virtual ~OptimizeRightAngleResponse() = default;
};
class DetailSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DetailSceneRequest() {}

  explicit DetailSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DetailSceneRequest() = default;
};
class DetailSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<long> subSceneNum{};
  shared_ptr<long> sourceNum{};
  shared_ptr<bool> published{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> previewToken{};

  DetailSceneResponseBody() {}

  explicit DetailSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (subSceneNum) {
      res["SubSceneNum"] = boost::any(*subSceneNum);
    }
    if (sourceNum) {
      res["SourceNum"] = boost::any(*sourceNum);
    }
    if (published) {
      res["Published"] = boost::any(*published);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SubSceneNum") != m.end() && !m["SubSceneNum"].empty()) {
      subSceneNum = make_shared<long>(boost::any_cast<long>(m["SubSceneNum"]));
    }
    if (m.find("SourceNum") != m.end() && !m["SourceNum"].empty()) {
      sourceNum = make_shared<long>(boost::any_cast<long>(m["SourceNum"]));
    }
    if (m.find("Published") != m.end() && !m["Published"].empty()) {
      published = make_shared<bool>(boost::any_cast<bool>(m["Published"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
  }


  virtual ~DetailSceneResponseBody() = default;
};
class DetailSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetailSceneResponseBody> body{};

  DetailSceneResponse() {}

  explicit DetailSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetailSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetailSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DetailSceneResponse() = default;
};
class CreateSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  CreateSceneRequest() {}

  explicit CreateSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~CreateSceneRequest() = default;
};
class CreateSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> previewToken{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  CreateSceneResponseBody() {}

  explicit CreateSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateSceneResponseBody() = default;
};
class CreateSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSceneResponseBody> body{};

  CreateSceneResponse() {}

  explicit CreateSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSceneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSceneResponse() = default;
};
class DeleteFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramFile{};
  shared_ptr<string> subSceneUuid{};

  DeleteFileRequest() {}

  explicit DeleteFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramFile) {
      res["ParamFile"] = boost::any(*paramFile);
    }
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamFile") != m.end() && !m["ParamFile"].empty()) {
      paramFile = make_shared<string>(boost::any_cast<string>(m["ParamFile"]));
    }
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
  }


  virtual ~DeleteFileRequest() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class CheckResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> country{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};
  shared_ptr<long> hid{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<long> level{};
  shared_ptr<string> url{};
  shared_ptr<string> prompt{};

  CheckResourceRequest() {}

  explicit CheckResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
  }


  virtual ~CheckResourceRequest() = default;
};
class CheckResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<string> message{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> url{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> country{};
  shared_ptr<string> prompt{};
  shared_ptr<long> level{};
  shared_ptr<string> pk{};
  shared_ptr<string> bid{};

  CheckResourceResponseBody() {}

  explicit CheckResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtWakeup) {
      res["GmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["Hid"] = boost::any(*hid);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskIdentifier) {
      res["TaskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (interrupt) {
      res["Interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["Invoker"] = boost::any(*invoker);
    }
    if (taskExtraData) {
      res["TaskExtraData"] = boost::any(*taskExtraData);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtWakeup") != m.end() && !m["GmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["GmtWakeup"]));
    }
    if (m.find("Hid") != m.end() && !m["Hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["Hid"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskIdentifier") != m.end() && !m["TaskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["TaskIdentifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Interrupt") != m.end() && !m["Interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["Interrupt"]));
    }
    if (m.find("Invoker") != m.end() && !m["Invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["Invoker"]));
    }
    if (m.find("TaskExtraData") != m.end() && !m["TaskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["TaskExtraData"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
  }


  virtual ~CheckResourceResponseBody() = default;
};
class CheckResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckResourceResponseBody> body{};

  CheckResourceResponse() {}

  explicit CheckResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckResourceResponse() = default;
};
class ListSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListSceneRequest() {}

  explicit ListSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSceneRequest() = default;
};
class ListSceneResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<long> subSceneNum{};
  shared_ptr<long> sourceNum{};
  shared_ptr<bool> published{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> previewToken{};

  ListSceneResponseBodyList() {}

  explicit ListSceneResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (subSceneNum) {
      res["SubSceneNum"] = boost::any(*subSceneNum);
    }
    if (sourceNum) {
      res["SourceNum"] = boost::any(*sourceNum);
    }
    if (published) {
      res["Published"] = boost::any(*published);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("SubSceneNum") != m.end() && !m["SubSceneNum"].empty()) {
      subSceneNum = make_shared<long>(boost::any_cast<long>(m["SubSceneNum"]));
    }
    if (m.find("SourceNum") != m.end() && !m["SourceNum"].empty()) {
      sourceNum = make_shared<long>(boost::any_cast<long>(m["SourceNum"]));
    }
    if (m.find("Published") != m.end() && !m["Published"].empty()) {
      published = make_shared<bool>(boost::any_cast<bool>(m["Published"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
  }


  virtual ~ListSceneResponseBodyList() = default;
};
class ListSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> count{};
  shared_ptr<vector<ListSceneResponseBodyList>> list{};

  ListSceneResponseBody() {}

  explicit ListSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListSceneResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSceneResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListSceneResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~ListSceneResponseBody() = default;
};
class ListSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSceneResponseBody> body{};

  ListSceneResponse() {}

  explicit ListSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSceneResponseBody>(model1);
      }
    }
  }


  virtual ~ListSceneResponse() = default;
};
class PublishHotspotRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramTag{};
  shared_ptr<string> subSceneUuid{};

  PublishHotspotRequest() {}

  explicit PublishHotspotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramTag) {
      res["ParamTag"] = boost::any(*paramTag);
    }
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamTag") != m.end() && !m["ParamTag"].empty()) {
      paramTag = make_shared<string>(boost::any_cast<string>(m["ParamTag"]));
    }
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
  }


  virtual ~PublishHotspotRequest() = default;
};
class PublishHotspotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  PublishHotspotResponseBody() {}

  explicit PublishHotspotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PublishHotspotResponseBody() = default;
};
class PublishHotspotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishHotspotResponseBody> body{};

  PublishHotspotResponse() {}

  explicit PublishHotspotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishHotspotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishHotspotResponseBody>(model1);
      }
    }
  }


  virtual ~PublishHotspotResponse() = default;
};
class UpdateSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateSceneRequest() {}

  explicit UpdateSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateSceneRequest() = default;
};
class UpdateSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  UpdateSceneResponseBody() {}

  explicit UpdateSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateSceneResponseBody() = default;
};
class UpdateSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSceneResponseBody> body{};

  UpdateSceneResponse() {}

  explicit UpdateSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSceneResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSceneResponse() = default;
};
class UpdateLayoutDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};
  shared_ptr<string> layoutData{};

  UpdateLayoutDataRequest() {}

  explicit UpdateLayoutDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    if (layoutData) {
      res["LayoutData"] = boost::any(*layoutData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
    if (m.find("LayoutData") != m.end() && !m["LayoutData"].empty()) {
      layoutData = make_shared<string>(boost::any_cast<string>(m["LayoutData"]));
    }
  }


  virtual ~UpdateLayoutDataRequest() = default;
};
class UpdateLayoutDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  UpdateLayoutDataResponseBody() {}

  explicit UpdateLayoutDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateLayoutDataResponseBody() = default;
};
class UpdateLayoutDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLayoutDataResponseBody> body{};

  UpdateLayoutDataResponse() {}

  explicit UpdateLayoutDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLayoutDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLayoutDataResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLayoutDataResponse() = default;
};
class SaveHotspotTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramTag{};
  shared_ptr<string> subSceneUuid{};

  SaveHotspotTagRequest() {}

  explicit SaveHotspotTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramTag) {
      res["ParamTag"] = boost::any(*paramTag);
    }
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamTag") != m.end() && !m["ParamTag"].empty()) {
      paramTag = make_shared<string>(boost::any_cast<string>(m["ParamTag"]));
    }
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
  }


  virtual ~SaveHotspotTagRequest() = default;
};
class SaveHotspotTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  SaveHotspotTagResponseBody() {}

  explicit SaveHotspotTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveHotspotTagResponseBody() = default;
};
class SaveHotspotTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveHotspotTagResponseBody> body{};

  SaveHotspotTagResponse() {}

  explicit SaveHotspotTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveHotspotTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveHotspotTagResponseBody>(model1);
      }
    }
  }


  virtual ~SaveHotspotTagResponse() = default;
};
class CheckPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};

  CheckPermissionRequest() {}

  explicit CheckPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
  }


  virtual ~CheckPermissionRequest() = default;
};
class CheckPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  CheckPermissionResponseBody() {}

  explicit CheckPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckPermissionResponseBody() = default;
};
class CheckPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckPermissionResponseBody> body{};

  CheckPermissionResponse() {}

  explicit CheckPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckPermissionResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteProjectRequest() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class RectVerticalRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};
  shared_ptr<string> verticalRect{};
  shared_ptr<bool> detectDoor{};
  shared_ptr<long> countDetectDoor{};

  RectVerticalRequest() {}

  explicit RectVerticalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    if (verticalRect) {
      res["VerticalRect"] = boost::any(*verticalRect);
    }
    if (detectDoor) {
      res["DetectDoor"] = boost::any(*detectDoor);
    }
    if (countDetectDoor) {
      res["CountDetectDoor"] = boost::any(*countDetectDoor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
    if (m.find("VerticalRect") != m.end() && !m["VerticalRect"].empty()) {
      verticalRect = make_shared<string>(boost::any_cast<string>(m["VerticalRect"]));
    }
    if (m.find("DetectDoor") != m.end() && !m["DetectDoor"].empty()) {
      detectDoor = make_shared<bool>(boost::any_cast<bool>(m["DetectDoor"]));
    }
    if (m.find("CountDetectDoor") != m.end() && !m["CountDetectDoor"].empty()) {
      countDetectDoor = make_shared<long>(boost::any_cast<long>(m["CountDetectDoor"]));
    }
  }


  virtual ~RectVerticalRequest() = default;
};
class RectVerticalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  RectVerticalResponseBody() {}

  explicit RectVerticalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RectVerticalResponseBody() = default;
};
class RectVerticalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RectVerticalResponseBody> body{};

  RectVerticalResponse() {}

  explicit RectVerticalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RectVerticalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RectVerticalResponseBody>(model1);
      }
    }
  }


  virtual ~RectVerticalResponse() = default;
};
class PredImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};
  shared_ptr<bool> detectDoor{};
  shared_ptr<long> countDetectDoor{};
  shared_ptr<bool> correctVertical{};

  PredImageRequest() {}

  explicit PredImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    if (detectDoor) {
      res["DetectDoor"] = boost::any(*detectDoor);
    }
    if (countDetectDoor) {
      res["CountDetectDoor"] = boost::any(*countDetectDoor);
    }
    if (correctVertical) {
      res["CorrectVertical"] = boost::any(*correctVertical);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
    if (m.find("DetectDoor") != m.end() && !m["DetectDoor"].empty()) {
      detectDoor = make_shared<bool>(boost::any_cast<bool>(m["DetectDoor"]));
    }
    if (m.find("CountDetectDoor") != m.end() && !m["CountDetectDoor"].empty()) {
      countDetectDoor = make_shared<long>(boost::any_cast<long>(m["CountDetectDoor"]));
    }
    if (m.find("CorrectVertical") != m.end() && !m["CorrectVertical"].empty()) {
      correctVertical = make_shared<bool>(boost::any_cast<bool>(m["CorrectVertical"]));
    }
  }


  virtual ~PredImageRequest() = default;
};
class PredImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};

  PredImageResponseBody() {}

  explicit PredImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~PredImageResponseBody() = default;
};
class PredImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PredImageResponseBody> body{};

  PredImageResponse() {}

  explicit PredImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PredImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredImageResponseBody>(model1);
      }
    }
  }


  virtual ~PredImageResponse() = default;
};
class GetOssPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetOssPolicyRequest() {}

  explicit GetOssPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetOssPolicyRequest() = default;
};
class GetOssPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> accessId{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> dir{};
  shared_ptr<string> host{};
  shared_ptr<string> expire{};
  shared_ptr<string> callback{};

  GetOssPolicyResponseBody() {}

  explicit GetOssPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
  }


  virtual ~GetOssPolicyResponseBody() = default;
};
class GetOssPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOssPolicyResponseBody> body{};

  GetOssPolicyResponse() {}

  explicit GetOssPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOssPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssPolicyResponse() = default;
};
class GetConnDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetConnDataRequest() {}

  explicit GetConnDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetConnDataRequest() = default;
};
class GetConnDataResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> mapId{};
  shared_ptr<string> type{};

  GetConnDataResponseBodyList() {}

  explicit GetConnDataResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mapId) {
      res["MapId"] = boost::any(*mapId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MapId") != m.end() && !m["MapId"].empty()) {
      mapId = make_shared<string>(boost::any_cast<string>(m["MapId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetConnDataResponseBodyList() = default;
};
class GetConnDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> version{};
  shared_ptr<string> extend{};
  shared_ptr<vector<GetConnDataResponseBodyList>> list{};

  GetConnDataResponseBody() {}

  explicit GetConnDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetConnDataResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConnDataResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetConnDataResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~GetConnDataResponseBody() = default;
};
class GetConnDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConnDataResponseBody> body{};

  GetConnDataResponse() {}

  explicit GetConnDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetConnDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnDataResponse() = default;
};
class TempPreviewStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  TempPreviewStatusRequest() {}

  explicit TempPreviewStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~TempPreviewStatusRequest() = default;
};
class TempPreviewStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};

  TempPreviewStatusResponseBody() {}

  explicit TempPreviewStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~TempPreviewStatusResponseBody() = default;
};
class TempPreviewStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TempPreviewStatusResponseBody> body{};

  TempPreviewStatusResponse() {}

  explicit TempPreviewStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TempPreviewStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TempPreviewStatusResponseBody>(model1);
      }
    }
  }


  virtual ~TempPreviewStatusResponse() = default;
};
class AddProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessId{};
  shared_ptr<string> name{};

  AddProjectRequest() {}

  explicit AddProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<long>(boost::any_cast<long>(m["BusinessId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~AddProjectRequest() = default;
};
class AddProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};

  AddProjectResponseBody() {}

  explicit AddProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~AddProjectResponseBody() = default;
};
class AddProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddProjectResponseBody> body{};

  AddProjectResponse() {}

  explicit AddProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddProjectResponseBody>(model1);
      }
    }
  }


  virtual ~AddProjectResponse() = default;
};
class ListMainScenesRequest : public Darabonba::Model {
public:
  shared_ptr<string> queryName{};

  ListMainScenesRequest() {}

  explicit ListMainScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryName) {
      res["QueryName"] = boost::any(*queryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryName") != m.end() && !m["QueryName"].empty()) {
      queryName = make_shared<string>(boost::any_cast<string>(m["QueryName"]));
    }
  }


  virtual ~ListMainScenesRequest() = default;
};
class ListMainScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<string> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  ListMainScenesResponseBody() {}

  explicit ListMainScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListMainScenesResponseBody() = default;
};
class ListMainScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListMainScenesResponseBody> body{};

  ListMainScenesResponse() {}

  explicit ListMainScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMainScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMainScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMainScenesResponse() = default;
};
class DetailSubSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DetailSubSceneRequest() {}

  explicit DetailSubSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DetailSubSceneRequest() = default;
};
class DetailSubSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> url{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> status{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};

  DetailSubSceneResponseBody() {}

  explicit DetailSubSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
  }


  virtual ~DetailSubSceneResponseBody() = default;
};
class DetailSubSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetailSubSceneResponseBody> body{};

  DetailSubSceneResponse() {}

  explicit DetailSubSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetailSubSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetailSubSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DetailSubSceneResponse() = default;
};
class ListSubSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListSubSceneRequest() {}

  explicit ListSubSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSubSceneRequest() = default;
};
class ListSubSceneResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> url{};
  shared_ptr<string> coverUrl{};
  shared_ptr<long> status{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};

  ListSubSceneResponseBodyList() {}

  explicit ListSubSceneResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (coverUrl) {
      res["CoverUrl"] = boost::any(*coverUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("CoverUrl") != m.end() && !m["CoverUrl"].empty()) {
      coverUrl = make_shared<string>(boost::any_cast<string>(m["CoverUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
  }


  virtual ~ListSubSceneResponseBodyList() = default;
};
class ListSubSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> count{};
  shared_ptr<vector<ListSubSceneResponseBodyList>> list{};

  ListSubSceneResponseBody() {}

  explicit ListSubSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListSubSceneResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSubSceneResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListSubSceneResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~ListSubSceneResponseBody() = default;
};
class ListSubSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSubSceneResponseBody> body{};

  ListSubSceneResponse() {}

  explicit ListSubSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSubSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSubSceneResponseBody>(model1);
      }
    }
  }


  virtual ~ListSubSceneResponse() = default;
};
class UpdateSubSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateSubSceneRequest() {}

  explicit UpdateSubSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateSubSceneRequest() = default;
};
class UpdateSubSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  UpdateSubSceneResponseBody() {}

  explicit UpdateSubSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateSubSceneResponseBody() = default;
};
class UpdateSubSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSubSceneResponseBody> body{};

  UpdateSubSceneResponse() {}

  explicit UpdateSubSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSubSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSubSceneResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSubSceneResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> businessId{};
  shared_ptr<string> businessUserIdList{};
  shared_ptr<string> gatherUserIdList{};
  shared_ptr<string> builderUserIdList{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessUserIdList) {
      res["BusinessUserIdList"] = boost::any(*businessUserIdList);
    }
    if (gatherUserIdList) {
      res["GatherUserIdList"] = boost::any(*gatherUserIdList);
    }
    if (builderUserIdList) {
      res["BuilderUserIdList"] = boost::any(*builderUserIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessUserIdList") != m.end() && !m["BusinessUserIdList"].empty()) {
      businessUserIdList = make_shared<string>(boost::any_cast<string>(m["BusinessUserIdList"]));
    }
    if (m.find("GatherUserIdList") != m.end() && !m["GatherUserIdList"].empty()) {
      gatherUserIdList = make_shared<string>(boost::any_cast<string>(m["GatherUserIdList"]));
    }
    if (m.find("BuilderUserIdList") != m.end() && !m["BuilderUserIdList"].empty()) {
      builderUserIdList = make_shared<string>(boost::any_cast<string>(m["BuilderUserIdList"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> id{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};
  shared_ptr<string> name{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class DropBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DropBucketRequest() {}

  explicit DropBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DropBucketRequest() = default;
};
class DropBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  DropBucketResponseBody() {}

  explicit DropBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DropBucketResponseBody() = default;
};
class DropBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DropBucketResponseBody> body{};

  DropBucketResponse() {}

  explicit DropBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DropBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DropBucketResponseBody>(model1);
      }
    }
  }


  virtual ~DropBucketResponse() = default;
};
class GetUserBucketConfigResponseBodyConfigInput : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> location{};

  GetUserBucketConfigResponseBodyConfigInput() {}

  explicit GetUserBucketConfigResponseBodyConfigInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~GetUserBucketConfigResponseBodyConfigInput() = default;
};
class GetUserBucketConfigResponseBodyConfigOutput : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> location{};

  GetUserBucketConfigResponseBodyConfigOutput() {}

  explicit GetUserBucketConfigResponseBodyConfigOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~GetUserBucketConfigResponseBodyConfigOutput() = default;
};
class GetUserBucketConfigResponseBodyConfig : public Darabonba::Model {
public:
  shared_ptr<GetUserBucketConfigResponseBodyConfigInput> input{};
  shared_ptr<GetUserBucketConfigResponseBodyConfigOutput> output{};

  GetUserBucketConfigResponseBodyConfig() {}

  explicit GetUserBucketConfigResponseBodyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      res["Input"] = input ? boost::any(input->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (output) {
      res["Output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(map<string, boost::any>) == m["Input"].type()) {
        GetUserBucketConfigResponseBodyConfigInput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Input"]));
        input = make_shared<GetUserBucketConfigResponseBodyConfigInput>(model1);
      }
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      if (typeid(map<string, boost::any>) == m["Output"].type()) {
        GetUserBucketConfigResponseBodyConfigOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Output"]));
        output = make_shared<GetUserBucketConfigResponseBodyConfigOutput>(model1);
      }
    }
  }


  virtual ~GetUserBucketConfigResponseBodyConfig() = default;
};
class GetUserBucketConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<GetUserBucketConfigResponseBodyConfig> config{};

  GetUserBucketConfigResponseBody() {}

  explicit GetUserBucketConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (config) {
      res["Config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["Config"].type()) {
        GetUserBucketConfigResponseBodyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Config"]));
        config = make_shared<GetUserBucketConfigResponseBodyConfig>(model1);
      }
    }
  }


  virtual ~GetUserBucketConfigResponseBody() = default;
};
class GetUserBucketConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserBucketConfigResponseBody> body{};

  GetUserBucketConfigResponse() {}

  explicit GetUserBucketConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserBucketConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserBucketConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserBucketConfigResponse() = default;
};
class AddBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<long> type{};

  AddBucketRequest() {}

  explicit AddBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~AddBucketRequest() = default;
};
class AddBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  AddBucketResponseBody() {}

  explicit AddBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~AddBucketResponseBody() = default;
};
class AddBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBucketResponseBody> body{};

  AddBucketResponse() {}

  explicit AddBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBucketResponseBody>(model1);
      }
    }
  }


  virtual ~AddBucketResponse() = default;
};
class SaveHotspotConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramTag{};
  shared_ptr<string> previewToken{};

  SaveHotspotConfigRequest() {}

  explicit SaveHotspotConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramTag) {
      res["ParamTag"] = boost::any(*paramTag);
    }
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamTag") != m.end() && !m["ParamTag"].empty()) {
      paramTag = make_shared<string>(boost::any_cast<string>(m["ParamTag"]));
    }
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
  }


  virtual ~SaveHotspotConfigRequest() = default;
};
class SaveHotspotConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  SaveHotspotConfigResponseBody() {}

  explicit SaveHotspotConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveHotspotConfigResponseBody() = default;
};
class SaveHotspotConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveHotspotConfigResponseBody> body{};

  SaveHotspotConfigResponse() {}

  explicit SaveHotspotConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveHotspotConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveHotspotConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveHotspotConfigResponse() = default;
};
class GetWindowConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> previewToken{};

  GetWindowConfigRequest() {}

  explicit GetWindowConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
  }


  virtual ~GetWindowConfigRequest() = default;
};
class GetWindowConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetWindowConfigResponseBody() {}

  explicit GetWindowConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWindowConfigResponseBody() = default;
};
class GetWindowConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWindowConfigResponseBody> body{};

  GetWindowConfigResponse() {}

  explicit GetWindowConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWindowConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWindowConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetWindowConfigResponse() = default;
};
class StatisQueryByTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  StatisQueryByTypeRequest() {}

  explicit StatisQueryByTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~StatisQueryByTypeRequest() = default;
};
class StatisQueryByTypeResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<long> count{};

  StatisQueryByTypeResponseBodyList() {}

  explicit StatisQueryByTypeResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~StatisQueryByTypeResponseBodyList() = default;
};
class StatisQueryByTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<vector<StatisQueryByTypeResponseBodyList>> list{};

  StatisQueryByTypeResponseBody() {}

  explicit StatisQueryByTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<StatisQueryByTypeResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatisQueryByTypeResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<StatisQueryByTypeResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~StatisQueryByTypeResponseBody() = default;
};
class StatisQueryByTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StatisQueryByTypeResponseBody> body{};

  StatisQueryByTypeResponse() {}

  explicit StatisQueryByTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StatisQueryByTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StatisQueryByTypeResponseBody>(model1);
      }
    }
  }


  virtual ~StatisQueryByTypeResponse() = default;
};
class StatisExportSceneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  StatisExportSceneInfoRequest() {}

  explicit StatisExportSceneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~StatisExportSceneInfoRequest() = default;
};
class StatisExportSceneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> url{};

  StatisExportSceneInfoResponseBody() {}

  explicit StatisExportSceneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~StatisExportSceneInfoResponseBody() = default;
};
class StatisExportSceneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StatisExportSceneInfoResponseBody> body{};

  StatisExportSceneInfoResponse() {}

  explicit StatisExportSceneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StatisExportSceneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StatisExportSceneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~StatisExportSceneInfoResponse() = default;
};
class GetHotspotConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> previewToken{};

  GetHotspotConfigRequest() {}

  explicit GetHotspotConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
  }


  virtual ~GetHotspotConfigRequest() = default;
};
class GetHotspotConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<string> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetHotspotConfigResponseBody() {}

  explicit GetHotspotConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetHotspotConfigResponseBody() = default;
};
class GetHotspotConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotspotConfigResponseBody> body{};

  GetHotspotConfigResponse() {}

  explicit GetHotspotConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotspotConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotspotConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotspotConfigResponse() = default;
};
class GetSceneBuildTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  GetSceneBuildTaskStatusRequest() {}

  explicit GetSceneBuildTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~GetSceneBuildTaskStatusRequest() = default;
};
class GetSceneBuildTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  GetSceneBuildTaskStatusResponseBody() {}

  explicit GetSceneBuildTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~GetSceneBuildTaskStatusResponseBody() = default;
};
class GetSceneBuildTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSceneBuildTaskStatusResponseBody> body{};

  GetSceneBuildTaskStatusResponse() {}

  explicit GetSceneBuildTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSceneBuildTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSceneBuildTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetSceneBuildTaskStatusResponse() = default;
};
class TempPreviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  TempPreviewRequest() {}

  explicit TempPreviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~TempPreviewRequest() = default;
};
class TempPreviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> previewUrl{};
  shared_ptr<string> key{};

  TempPreviewResponseBody() {}

  explicit TempPreviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~TempPreviewResponseBody() = default;
};
class TempPreviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TempPreviewResponseBody> body{};

  TempPreviewResponse() {}

  explicit TempPreviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TempPreviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TempPreviewResponseBody>(model1);
      }
    }
  }


  virtual ~TempPreviewResponse() = default;
};
class PublishSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  PublishSceneRequest() {}

  explicit PublishSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~PublishSceneRequest() = default;
};
class PublishSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> previewUrl{};

  PublishSceneResponseBody() {}

  explicit PublishSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~PublishSceneResponseBody() = default;
};
class PublishSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishSceneResponseBody> body{};

  PublishSceneResponse() {}

  explicit PublishSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishSceneResponseBody>(model1);
      }
    }
  }


  virtual ~PublishSceneResponse() = default;
};
class DetailProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DetailProjectRequest() {}

  explicit DetailProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DetailProjectRequest() = default;
};
class DetailProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> businessId{};
  shared_ptr<string> businessName{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> token{};

  DetailProjectResponseBody() {}

  explicit DetailProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<long>(boost::any_cast<long>(m["BusinessId"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DetailProjectResponseBody() = default;
};
class DetailProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetailProjectResponseBody> body{};

  DetailProjectResponse() {}

  explicit DetailProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetailProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetailProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DetailProjectResponse() = default;
};
class ListScenesRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<bool> isPublishQuery{};

  ListScenesRequest() {}

  explicit ListScenesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (isPublishQuery) {
      res["IsPublishQuery"] = boost::any(*isPublishQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("IsPublishQuery") != m.end() && !m["IsPublishQuery"].empty()) {
      isPublishQuery = make_shared<bool>(boost::any_cast<bool>(m["IsPublishQuery"]));
    }
  }


  virtual ~ListScenesRequest() = default;
};
class ListScenesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  ListScenesResponseBodyData() {}

  explicit ListScenesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ListScenesResponseBodyData() = default;
};
class ListScenesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListScenesResponseBodyData>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  ListScenesResponseBody() {}

  explicit ListScenesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListScenesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListScenesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListScenesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListScenesResponseBody() = default;
};
class ListScenesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListScenesResponseBody> body{};

  ListScenesResponse() {}

  explicit ListScenesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListScenesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScenesResponseBody>(model1);
      }
    }
  }


  virtual ~ListScenesResponse() = default;
};
class DropSubSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DropSubSceneRequest() {}

  explicit DropSubSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DropSubSceneRequest() = default;
};
class DropSubSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  DropSubSceneResponseBody() {}

  explicit DropSubSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DropSubSceneResponseBody() = default;
};
class DropSubSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DropSubSceneResponseBody> body{};

  DropSubSceneResponse() {}

  explicit DropSubSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DropSubSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DropSubSceneResponseBody>(model1);
      }
    }
  }


  virtual ~DropSubSceneResponse() = default;
};
class IsEnableOssRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isEnable{};

  IsEnableOssRequest() {}

  explicit IsEnableOssRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEnable) {
      res["IsEnable"] = boost::any(*isEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsEnable") != m.end() && !m["IsEnable"].empty()) {
      isEnable = make_shared<bool>(boost::any_cast<bool>(m["IsEnable"]));
    }
  }


  virtual ~IsEnableOssRequest() = default;
};
class IsEnableOssResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  IsEnableOssResponseBody() {}

  explicit IsEnableOssResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~IsEnableOssResponseBody() = default;
};
class IsEnableOssResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IsEnableOssResponseBody> body{};

  IsEnableOssResponse() {}

  explicit IsEnableOssResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        IsEnableOssResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsEnableOssResponseBody>(model1);
      }
    }
  }


  virtual ~IsEnableOssResponse() = default;
};
class GetHotspotTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> previewToken{};
  shared_ptr<string> subSceneUuid{};
  shared_ptr<string> type{};

  GetHotspotTagRequest() {}

  explicit GetHotspotTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (previewToken) {
      res["PreviewToken"] = boost::any(*previewToken);
    }
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreviewToken") != m.end() && !m["PreviewToken"].empty()) {
      previewToken = make_shared<string>(boost::any_cast<string>(m["PreviewToken"]));
    }
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetHotspotTagRequest() = default;
};
class GetHotspotTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<string> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetHotspotTagResponseBody() {}

  explicit GetHotspotTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetHotspotTagResponseBody() = default;
};
class GetHotspotTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHotspotTagResponseBody> body{};

  GetHotspotTagResponse() {}

  explicit GetHotspotTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHotspotTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotspotTagResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotspotTagResponse() = default;
};
class DropProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  DropProjectRequest() {}

  explicit DropProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DropProjectRequest() = default;
};
class DropProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  DropProjectResponseBody() {}

  explicit DropProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DropProjectResponseBody() = default;
};
class DropProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DropProjectResponseBody> body{};

  DropProjectResponse() {}

  explicit DropProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DropProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DropProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DropProjectResponse() = default;
};
class GetUserOssStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  GetUserOssStatusResponseBody() {}

  explicit GetUserOssStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~GetUserOssStatusResponseBody() = default;
};
class GetUserOssStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserOssStatusResponseBody> body{};

  GetUserOssStatusResponse() {}

  explicit GetUserOssStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserOssStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserOssStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserOssStatusResponse() = default;
};
class ListProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> name{};

  ListProjectRequest() {}

  explicit ListProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListProjectRequest() = default;
};
class ListProjectResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> businessId{};
  shared_ptr<string> businessName{};
  shared_ptr<long> createTime{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> token{};

  ListProjectResponseBodyList() {}

  explicit ListProjectResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<long>(boost::any_cast<long>(m["BusinessId"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~ListProjectResponseBodyList() = default;
};
class ListProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> totalPage{};
  shared_ptr<long> count{};
  shared_ptr<vector<ListProjectResponseBodyList>> list{};

  ListProjectResponseBody() {}

  explicit ListProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListProjectResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListProjectResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~ListProjectResponseBody() = default;
};
class ListProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProjectResponseBody> body{};

  ListProjectResponse() {}

  explicit ListProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectResponse() = default;
};
class GetOriginLayoutDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetOriginLayoutDataRequest() {}

  explicit GetOriginLayoutDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetOriginLayoutDataRequest() = default;
};
class GetOriginLayoutDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};

  GetOriginLayoutDataResponseBody() {}

  explicit GetOriginLayoutDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetOriginLayoutDataResponseBody() = default;
};
class GetOriginLayoutDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOriginLayoutDataResponseBody> body{};

  GetOriginLayoutDataResponse() {}

  explicit GetOriginLayoutDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOriginLayoutDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOriginLayoutDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetOriginLayoutDataResponse() = default;
};
class StatisListSceneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  StatisListSceneInfoRequest() {}

  explicit StatisListSceneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~StatisListSceneInfoRequest() = default;
};
class StatisListSceneInfoResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> sceneType{};
  shared_ptr<string> publishTime{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> resCount{};
  shared_ptr<string> projectName{};
  shared_ptr<long> measureCount{};
  shared_ptr<long> publishStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<long> sceneId{};
  shared_ptr<long> projectId{};

  StatisListSceneInfoResponseBodyList() {}

  explicit StatisListSceneInfoResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneType) {
      res["SceneType"] = boost::any(*sceneType);
    }
    if (publishTime) {
      res["PublishTime"] = boost::any(*publishTime);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (resCount) {
      res["ResCount"] = boost::any(*resCount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (measureCount) {
      res["MeasureCount"] = boost::any(*measureCount);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneType") != m.end() && !m["SceneType"].empty()) {
      sceneType = make_shared<long>(boost::any_cast<long>(m["SceneType"]));
    }
    if (m.find("PublishTime") != m.end() && !m["PublishTime"].empty()) {
      publishTime = make_shared<string>(boost::any_cast<string>(m["PublishTime"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ResCount") != m.end() && !m["ResCount"].empty()) {
      resCount = make_shared<long>(boost::any_cast<long>(m["ResCount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("MeasureCount") != m.end() && !m["MeasureCount"].empty()) {
      measureCount = make_shared<long>(boost::any_cast<long>(m["MeasureCount"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<long>(boost::any_cast<long>(m["PublishStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~StatisListSceneInfoResponseBodyList() = default;
};
class StatisListSceneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<vector<StatisListSceneInfoResponseBodyList>> list{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPages{};

  StatisListSceneInfoResponseBody() {}

  explicit StatisListSceneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<StatisListSceneInfoResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatisListSceneInfoResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<StatisListSceneInfoResponseBodyList>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~StatisListSceneInfoResponseBody() = default;
};
class StatisListSceneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StatisListSceneInfoResponseBody> body{};

  StatisListSceneInfoResponse() {}

  explicit StatisListSceneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StatisListSceneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StatisListSceneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~StatisListSceneInfoResponse() = default;
};
class ScenePublishRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};

  ScenePublishRequest() {}

  explicit ScenePublishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
  }


  virtual ~ScenePublishRequest() = default;
};
class ScenePublishResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> previewUrl{};

  ScenePublishResponseBody() {}

  explicit ScenePublishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (previewUrl) {
      res["PreviewUrl"] = boost::any(*previewUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PreviewUrl") != m.end() && !m["PreviewUrl"].empty()) {
      previewUrl = make_shared<string>(boost::any_cast<string>(m["PreviewUrl"]));
    }
  }


  virtual ~ScenePublishResponseBody() = default;
};
class ScenePublishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScenePublishResponseBody> body{};

  ScenePublishResponse() {}

  explicit ScenePublishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScenePublishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScenePublishResponseBody>(model1);
      }
    }
  }


  virtual ~ScenePublishResponse() = default;
};
class SaveFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramFile{};
  shared_ptr<string> subSceneUuid{};

  SaveFileRequest() {}

  explicit SaveFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramFile) {
      res["ParamFile"] = boost::any(*paramFile);
    }
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamFile") != m.end() && !m["ParamFile"].empty()) {
      paramFile = make_shared<string>(boost::any_cast<string>(m["ParamFile"]));
    }
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
  }


  virtual ~SaveFileRequest() = default;
};
class SaveFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<string> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  SaveFileResponseBody() {}

  explicit SaveFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveFileResponseBody() = default;
};
class SaveFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SaveFileResponseBody> body{};

  SaveFileResponse() {}

  explicit SaveFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SaveFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveFileResponseBody>(model1);
      }
    }
  }


  virtual ~SaveFileResponse() = default;
};
class GetRectifyImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetRectifyImageRequest() {}

  explicit GetRectifyImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetRectifyImageRequest() = default;
};
class GetRectifyImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> url{};

  GetRectifyImageResponseBody() {}

  explicit GetRectifyImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetRectifyImageResponseBody() = default;
};
class GetRectifyImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRectifyImageResponseBody> body{};

  GetRectifyImageResponse() {}

  explicit GetRectifyImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRectifyImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRectifyImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetRectifyImageResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> businessId{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> newBucketName{};

  UpdateBucketRequest() {}

  explicit UpdateBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (newBucketName) {
      res["NewBucketName"] = boost::any(*newBucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("NewBucketName") != m.end() && !m["NewBucketName"].empty()) {
      newBucketName = make_shared<string>(boost::any_cast<string>(m["NewBucketName"]));
    }
  }


  virtual ~UpdateBucketRequest() = default;
};
class UpdateBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<bool> status{};

  UpdateBucketResponseBody() {}

  explicit UpdateBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~UpdateBucketResponseBody() = default;
};
class UpdateBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateBucketResponseBody> body{};

  UpdateBucketResponse() {}

  explicit UpdateBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBucketResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBucketResponse() = default;
};
class StatisQueryByDayRequest : public Darabonba::Model {
public:
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};

  StatisQueryByDayRequest() {}

  explicit StatisQueryByDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
  }


  virtual ~StatisQueryByDayRequest() = default;
};
class StatisQueryByDayResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> count{};
  shared_ptr<string> day{};

  StatisQueryByDayResponseBodyList() {}

  explicit StatisQueryByDayResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
  }


  virtual ~StatisQueryByDayResponseBodyList() = default;
};
class StatisQueryByDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<vector<StatisQueryByDayResponseBodyList>> list{};

  StatisQueryByDayResponseBody() {}

  explicit StatisQueryByDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<StatisQueryByDayResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StatisQueryByDayResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<StatisQueryByDayResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~StatisQueryByDayResponseBody() = default;
};
class StatisQueryByDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StatisQueryByDayResponseBody> body{};

  StatisQueryByDayResponse() {}

  explicit StatisQueryByDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StatisQueryByDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StatisQueryByDayResponseBody>(model1);
      }
    }
  }


  virtual ~StatisQueryByDayResponse() = default;
};
class GetSceneListRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  GetSceneListRequest() {}

  explicit GetSceneListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~GetSceneListRequest() = default;
};
class GetSceneListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetSceneListResponseBody() {}

  explicit GetSceneListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetSceneListResponseBody() = default;
};
class GetSceneListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSceneListResponseBody> body{};

  GetSceneListResponse() {}

  explicit GetSceneListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSceneListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSceneListResponseBody>(model1);
      }
    }
  }


  virtual ~GetSceneListResponse() = default;
};
class GetSubSceneTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetSubSceneTaskStatusRequest() {}

  explicit GetSubSceneTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetSubSceneTaskStatusRequest() = default;
};
class GetSubSceneTaskStatusResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> subSceneId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  GetSubSceneTaskStatusResponseBodyList() {}

  explicit GetSubSceneTaskStatusResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~GetSubSceneTaskStatusResponseBodyList() = default;
};
class GetSubSceneTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetSubSceneTaskStatusResponseBodyList>> list{};

  GetSubSceneTaskStatusResponseBody() {}

  explicit GetSubSceneTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<GetSubSceneTaskStatusResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSubSceneTaskStatusResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<GetSubSceneTaskStatusResponseBodyList>>(expect1);
      }
    }
  }


  virtual ~GetSubSceneTaskStatusResponseBody() = default;
};
class GetSubSceneTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSubSceneTaskStatusResponseBody> body{};

  GetSubSceneTaskStatusResponse() {}

  explicit GetSubSceneTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSubSceneTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSubSceneTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetSubSceneTaskStatusResponse() = default;
};
class PredictionWallLineRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<long> cameraHeight{};

  PredictionWallLineRequest() {}

  explicit PredictionWallLineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (cameraHeight) {
      res["CameraHeight"] = boost::any(*cameraHeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("CameraHeight") != m.end() && !m["CameraHeight"].empty()) {
      cameraHeight = make_shared<long>(boost::any_cast<long>(m["CameraHeight"]));
    }
  }


  virtual ~PredictionWallLineRequest() = default;
};
class PredictionWallLineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> taskId{};
  shared_ptr<string> subSceneId{};

  PredictionWallLineResponseBody() {}

  explicit PredictionWallLineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~PredictionWallLineResponseBody() = default;
};
class PredictionWallLineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PredictionWallLineResponseBody> body{};

  PredictionWallLineResponse() {}

  explicit PredictionWallLineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PredictionWallLineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredictionWallLineResponseBody>(model1);
      }
    }
  }


  virtual ~PredictionWallLineResponse() = default;
};
class GetPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneUuid{};
  shared_ptr<string> type{};

  GetPolicyRequest() {}

  explicit GetPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneUuid) {
      res["SubSceneUuid"] = boost::any(*subSceneUuid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneUuid") != m.end() && !m["SubSceneUuid"].empty()) {
      subSceneUuid = make_shared<string>(boost::any_cast<string>(m["SubSceneUuid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetPolicyRequest() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> objectString{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errMessage{};
  shared_ptr<bool> success{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (objectString) {
      res["ObjectString"] = boost::any(*objectString);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ObjectString") != m.end() && !m["ObjectString"].empty()) {
      objectString = make_shared<string>(boost::any_cast<string>(m["ObjectString"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class AddSubSceneRequest : public Darabonba::Model {
public:
  shared_ptr<string> sceneId{};
  shared_ptr<string> name{};

  AddSubSceneRequest() {}

  explicit AddSubSceneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~AddSubSceneRequest() = default;
};
class AddSubSceneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> id{};

  AddSubSceneResponseBody() {}

  explicit AddSubSceneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~AddSubSceneResponseBody() = default;
};
class AddSubSceneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSubSceneResponseBody> body{};

  AddSubSceneResponse() {}

  explicit AddSubSceneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddSubSceneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSubSceneResponseBody>(model1);
      }
    }
  }


  virtual ~AddSubSceneResponse() = default;
};
class GetLayoutDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> subSceneId{};

  GetLayoutDataRequest() {}

  explicit GetLayoutDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subSceneId) {
      res["SubSceneId"] = boost::any(*subSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubSceneId") != m.end() && !m["SubSceneId"].empty()) {
      subSceneId = make_shared<string>(boost::any_cast<string>(m["SubSceneId"]));
    }
  }


  virtual ~GetLayoutDataRequest() = default;
};
class GetLayoutDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<string> data{};

  GetLayoutDataResponseBody() {}

  explicit GetLayoutDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetLayoutDataResponseBody() = default;
};
class GetLayoutDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLayoutDataResponseBody> body{};

  GetLayoutDataResponse() {}

  explicit GetLayoutDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLayoutDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLayoutDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetLayoutDataResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  GetSingleConnDataResponse getSingleConnDataWithOptions(shared_ptr<GetSingleConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSingleConnDataResponse getSingleConnData(shared_ptr<GetSingleConnDataRequest> request);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<GetTaskStatusRequest> request);
  GetSceneDataResponse getSceneDataWithOptions(shared_ptr<GetSceneDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSceneDataResponse getSceneData(shared_ptr<GetSceneDataRequest> request);
  LinkImageResponse linkImageWithOptions(shared_ptr<LinkImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LinkImageResponse linkImage(shared_ptr<LinkImageRequest> request);
  AddSceneResponse addSceneWithOptions(shared_ptr<AddSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSceneResponse addScene(shared_ptr<AddSceneRequest> request);
  UpdateConnDataResponse updateConnDataWithOptions(shared_ptr<UpdateConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConnDataResponse updateConnData(shared_ptr<UpdateConnDataRequest> request);
  BucketIsExistResponse bucketIsExistWithOptions(shared_ptr<BucketIsExistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BucketIsExistResponse bucketIsExist(shared_ptr<BucketIsExistRequest> request);
  RectifyImageResponse rectifyImageWithOptions(shared_ptr<RectifyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RectifyImageResponse rectifyImage(shared_ptr<RectifyImageRequest> request);
  LabelBuildResponse labelBuildWithOptions(shared_ptr<LabelBuildRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LabelBuildResponse labelBuild(shared_ptr<LabelBuildRequest> request);
  DropSceneResponse dropSceneWithOptions(shared_ptr<DropSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DropSceneResponse dropScene(shared_ptr<DropSceneRequest> request);
  OptimizeRightAngleResponse optimizeRightAngleWithOptions(shared_ptr<OptimizeRightAngleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OptimizeRightAngleResponse optimizeRightAngle(shared_ptr<OptimizeRightAngleRequest> request);
  DetailSceneResponse detailSceneWithOptions(shared_ptr<DetailSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetailSceneResponse detailScene(shared_ptr<DetailSceneRequest> request);
  CreateSceneResponse createSceneWithOptions(shared_ptr<CreateSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSceneResponse createScene(shared_ptr<CreateSceneRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<DeleteFileRequest> request);
  CheckResourceResponse checkResourceWithOptions(shared_ptr<CheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResourceResponse checkResource(shared_ptr<CheckResourceRequest> request);
  ListSceneResponse listSceneWithOptions(shared_ptr<ListSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSceneResponse listScene(shared_ptr<ListSceneRequest> request);
  PublishHotspotResponse publishHotspotWithOptions(shared_ptr<PublishHotspotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishHotspotResponse publishHotspot(shared_ptr<PublishHotspotRequest> request);
  UpdateSceneResponse updateSceneWithOptions(shared_ptr<UpdateSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSceneResponse updateScene(shared_ptr<UpdateSceneRequest> request);
  UpdateLayoutDataResponse updateLayoutDataWithOptions(shared_ptr<UpdateLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLayoutDataResponse updateLayoutData(shared_ptr<UpdateLayoutDataRequest> request);
  SaveHotspotTagResponse saveHotspotTagWithOptions(shared_ptr<SaveHotspotTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveHotspotTagResponse saveHotspotTag(shared_ptr<SaveHotspotTagRequest> request);
  CheckPermissionResponse checkPermissionWithOptions(shared_ptr<CheckPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckPermissionResponse checkPermission(shared_ptr<CheckPermissionRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  RectVerticalResponse rectVerticalWithOptions(shared_ptr<RectVerticalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RectVerticalResponse rectVertical(shared_ptr<RectVerticalRequest> request);
  PredImageResponse predImageWithOptions(shared_ptr<PredImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredImageResponse predImage(shared_ptr<PredImageRequest> request);
  GetOssPolicyResponse getOssPolicyWithOptions(shared_ptr<GetOssPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssPolicyResponse getOssPolicy(shared_ptr<GetOssPolicyRequest> request);
  GetConnDataResponse getConnDataWithOptions(shared_ptr<GetConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnDataResponse getConnData(shared_ptr<GetConnDataRequest> request);
  TempPreviewStatusResponse tempPreviewStatusWithOptions(shared_ptr<TempPreviewStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TempPreviewStatusResponse tempPreviewStatus(shared_ptr<TempPreviewStatusRequest> request);
  AddProjectResponse addProjectWithOptions(shared_ptr<AddProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddProjectResponse addProject(shared_ptr<AddProjectRequest> request);
  ListMainScenesResponse listMainScenesWithOptions(shared_ptr<ListMainScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMainScenesResponse listMainScenes(shared_ptr<ListMainScenesRequest> request);
  DetailSubSceneResponse detailSubSceneWithOptions(shared_ptr<DetailSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetailSubSceneResponse detailSubScene(shared_ptr<DetailSubSceneRequest> request);
  ListSubSceneResponse listSubSceneWithOptions(shared_ptr<ListSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSubSceneResponse listSubScene(shared_ptr<ListSubSceneRequest> request);
  UpdateSubSceneResponse updateSubSceneWithOptions(shared_ptr<UpdateSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSubSceneResponse updateSubScene(shared_ptr<UpdateSubSceneRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  DropBucketResponse dropBucketWithOptions(shared_ptr<DropBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DropBucketResponse dropBucket(shared_ptr<DropBucketRequest> request);
  GetUserBucketConfigResponse getUserBucketConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserBucketConfigResponse getUserBucketConfig();
  AddBucketResponse addBucketWithOptions(shared_ptr<AddBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBucketResponse addBucket(shared_ptr<AddBucketRequest> request);
  SaveHotspotConfigResponse saveHotspotConfigWithOptions(shared_ptr<SaveHotspotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveHotspotConfigResponse saveHotspotConfig(shared_ptr<SaveHotspotConfigRequest> request);
  GetWindowConfigResponse getWindowConfigWithOptions(shared_ptr<GetWindowConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWindowConfigResponse getWindowConfig(shared_ptr<GetWindowConfigRequest> request);
  StatisQueryByTypeResponse statisQueryByTypeWithOptions(shared_ptr<StatisQueryByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StatisQueryByTypeResponse statisQueryByType(shared_ptr<StatisQueryByTypeRequest> request);
  StatisExportSceneInfoResponse statisExportSceneInfoWithOptions(shared_ptr<StatisExportSceneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StatisExportSceneInfoResponse statisExportSceneInfo(shared_ptr<StatisExportSceneInfoRequest> request);
  GetHotspotConfigResponse getHotspotConfigWithOptions(shared_ptr<GetHotspotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotspotConfigResponse getHotspotConfig(shared_ptr<GetHotspotConfigRequest> request);
  GetSceneBuildTaskStatusResponse getSceneBuildTaskStatusWithOptions(shared_ptr<GetSceneBuildTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSceneBuildTaskStatusResponse getSceneBuildTaskStatus(shared_ptr<GetSceneBuildTaskStatusRequest> request);
  TempPreviewResponse tempPreviewWithOptions(shared_ptr<TempPreviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TempPreviewResponse tempPreview(shared_ptr<TempPreviewRequest> request);
  PublishSceneResponse publishSceneWithOptions(shared_ptr<PublishSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishSceneResponse publishScene(shared_ptr<PublishSceneRequest> request);
  DetailProjectResponse detailProjectWithOptions(shared_ptr<DetailProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetailProjectResponse detailProject(shared_ptr<DetailProjectRequest> request);
  ListScenesResponse listScenesWithOptions(shared_ptr<ListScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScenesResponse listScenes(shared_ptr<ListScenesRequest> request);
  DropSubSceneResponse dropSubSceneWithOptions(shared_ptr<DropSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DropSubSceneResponse dropSubScene(shared_ptr<DropSubSceneRequest> request);
  IsEnableOssResponse isEnableOssWithOptions(shared_ptr<IsEnableOssRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsEnableOssResponse isEnableOss(shared_ptr<IsEnableOssRequest> request);
  GetHotspotTagResponse getHotspotTagWithOptions(shared_ptr<GetHotspotTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotspotTagResponse getHotspotTag(shared_ptr<GetHotspotTagRequest> request);
  DropProjectResponse dropProjectWithOptions(shared_ptr<DropProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DropProjectResponse dropProject(shared_ptr<DropProjectRequest> request);
  GetUserOssStatusResponse getUserOssStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserOssStatusResponse getUserOssStatus();
  ListProjectResponse listProjectWithOptions(shared_ptr<ListProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectResponse listProject(shared_ptr<ListProjectRequest> request);
  GetOriginLayoutDataResponse getOriginLayoutDataWithOptions(shared_ptr<GetOriginLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOriginLayoutDataResponse getOriginLayoutData(shared_ptr<GetOriginLayoutDataRequest> request);
  StatisListSceneInfoResponse statisListSceneInfoWithOptions(shared_ptr<StatisListSceneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StatisListSceneInfoResponse statisListSceneInfo(shared_ptr<StatisListSceneInfoRequest> request);
  ScenePublishResponse scenePublishWithOptions(shared_ptr<ScenePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScenePublishResponse scenePublish(shared_ptr<ScenePublishRequest> request);
  SaveFileResponse saveFileWithOptions(shared_ptr<SaveFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveFileResponse saveFile(shared_ptr<SaveFileRequest> request);
  GetRectifyImageResponse getRectifyImageWithOptions(shared_ptr<GetRectifyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRectifyImageResponse getRectifyImage(shared_ptr<GetRectifyImageRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  UpdateBucketResponse updateBucketWithOptions(shared_ptr<UpdateBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBucketResponse updateBucket(shared_ptr<UpdateBucketRequest> request);
  StatisQueryByDayResponse statisQueryByDayWithOptions(shared_ptr<StatisQueryByDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StatisQueryByDayResponse statisQueryByDay(shared_ptr<StatisQueryByDayRequest> request);
  GetSceneListResponse getSceneListWithOptions(shared_ptr<GetSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSceneListResponse getSceneList(shared_ptr<GetSceneListRequest> request);
  GetSubSceneTaskStatusResponse getSubSceneTaskStatusWithOptions(shared_ptr<GetSubSceneTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSubSceneTaskStatusResponse getSubSceneTaskStatus(shared_ptr<GetSubSceneTaskStatusRequest> request);
  PredictionWallLineResponse predictionWallLineWithOptions(shared_ptr<PredictionWallLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredictionWallLineResponse predictionWallLine(shared_ptr<PredictionWallLineRequest> request);
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  AddSubSceneResponse addSubSceneWithOptions(shared_ptr<AddSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSubSceneResponse addSubScene(shared_ptr<AddSubSceneRequest> request);
  GetLayoutDataResponse getLayoutDataWithOptions(shared_ptr<GetLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLayoutDataResponse getLayoutData(shared_ptr<GetLayoutDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Tdsr20200101

#endif

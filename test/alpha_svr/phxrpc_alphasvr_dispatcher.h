/* phxrpc_alphasvr_dispatcher.h

 Generated by phxrpc_pb2service from alpha_svr.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "phxrpc/rpc.h"


class AlphaSvrService;

class AlphaSvrDispatcher {
  public:
    static const phxrpc::BaseDispatcher<AlphaSvrDispatcher>::URIFuncMap &GetURIFuncMap();

    AlphaSvrDispatcher(AlphaSvrService &service, phxrpc::DispatcherArgs_t *dispatcher_args);

    virtual ~AlphaSvrDispatcher();

    int PHXEcho(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);
    int AddTwoDigits(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);
    int AddSomeDigits(const phxrpc::BaseRequest &req, phxrpc::BaseResponse *const resp);

  private:
    AlphaSvrService &service_;
    phxrpc::DispatcherArgs_t *dispatcher_args_;
};


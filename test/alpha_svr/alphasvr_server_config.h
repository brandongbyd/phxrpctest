/* alphasvr_server_config.h

 Generated by phxrpc_pb2server from alpha_svr.proto

*/

#pragma once

#include "phxrpc/rpc.h"


class AlphaSvrServerConfig {
  public:
    AlphaSvrServerConfig();

    virtual ~AlphaSvrServerConfig();

    bool Read(const char *config_file);

    phxrpc::HshaServerConfig &GetHshaServerConfig();

  private:
    phxrpc::HshaServerConfig ep_server_config_;
};


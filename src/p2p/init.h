#ifndef AMBR_P2P_INIT_H
#define AMBR_P2P_INIT_H

#include <net.h>
#include <shutdown.h>

namespace ambr{
  namespace p2p{
    bool init(CConnman::Options&&);
    void Interrupt();
    void WaitForShutdown();
    void Shutdown();  
  };
};
#endif


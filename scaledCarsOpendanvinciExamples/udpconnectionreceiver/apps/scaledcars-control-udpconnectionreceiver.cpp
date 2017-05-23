#include "UDPConnectionReceiver.h"

int32_t main(int32_t argc, char **argv) {
    scaledcars::control::UDPConnectionReceiver udpconnectionreceiver(argc, argv);
    return udpconnectionreceiver.runModule();
}

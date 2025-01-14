#ifndef NETWORK_LISTENER_H
#define NETWORK_LISTENER_H

#include "fillerpipe.h"

class NetworkListener {
    public:
        NetworkListener() = default;
        virtual ~NetworkListener() = default;
        bool isListening() { return listening;}
        bool isIniComplete() {return initComplete;}
        virtual void init() = 0;
        virtual void startListening(shared_ptr<FillerPipe> fillerPipe) = 0;
    protected:
        void setIsListening(bool value) { listening = value; }
        bool initComplete = false;
    private:
        bool listening = false;
};

#endif //#define NETWORK_LISTENER_H
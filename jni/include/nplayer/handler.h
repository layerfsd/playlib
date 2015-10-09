// Generated by Neo

#ifndef _UTILS_HANDLER_H_
#define _UTILS_HANDLER_H_

#include <nplayer/defines.h>

namespace utils {
class HandlerBody;

class Handler {
   public:
    Handler();
    virtual ~Handler();

    bool send(int what, int arg1, int arg2, void* obj);

    virtual bool handle(int what, int arg1, int arg2, void* obj) {
        return false;
    }

   private:
    HandlerBody* body_;
    ONLY_EMPTY_CONSTRUCTION(Handler);
};
} /* namespace: utils */

#endif /* _UTILS_HANDLER_H_ */

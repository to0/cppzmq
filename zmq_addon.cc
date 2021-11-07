#include "zmq_addon.hpp"

namespace zmq {

context_t& shared_context() {
    static context_t* ctx = new context_t(/*ZMQ_IO_THREADS=*/0);
    return *ctx;
}

} // namespace zmq
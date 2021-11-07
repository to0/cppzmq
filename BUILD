cc_library(
    name = "cppzmq",
    hdrs = [
        "zmq.hpp",
        "zmq_addon.hpp",
    ],
    srcs = ["zmq_addon.cc"],
    defines = ["ZMQ_BUILD_DRAFT_API"],
    linkopts = ["-lzmq"],
    visibility = ["//visibility:public"],
)
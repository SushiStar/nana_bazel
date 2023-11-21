load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "posix",
    srcs = [
        "theme.cpp",
    ],
    hdrs = [
        "theme.hpp",
        "xdnd_protocol.hpp",
        "platform_spec.hpp",
    ],
    deps = [
        "//nana/detail",
        "//nana/common",
    ]
    visibility = ["//visibility:public"],
)

load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "filesystem",
    srcs = [
        "filesystem.cpp",
    ],
    hdrs = [
        "filesystem.hpp",
        "filesystem_ext.hpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//nana/common:base",
    ],
)

load("@rules_cc//cc:defs.bzl", "cc_library")

package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "threads",
    srcs = [
        "pool.cpp",
    ],
    hdrs = [
        "pool.hpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//nana/common:base",
    ],
)

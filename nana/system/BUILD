load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "platform",
    srcs = [
        "platform.cpp",
    ],
    hdrs = [
        "platform.hpp",
    ],
    deps = [
        "//nana/common:base",
    ],
)

cc_library(
    name = "system",
    srcs = [
        "dataexch.cpp",
    ],
    hdrs = [
        "dataexch.hpp",
    ],
    deps = [
        "//nana/gui:basis",
        "//nana/paint:graphics",
        "//nana/paint:pixel_buffer",
    ],
    visibility = ["//visibility:public"],
)

load("@rules_cc//cc:defs.bzl", "cc_library")

# The very base part, without any dependency.
cc_library(
    name = "animation",
    srcs = [
        "animation.cpp",
    ],
    hdrs = [
        "animation.hpp",
    ],
    deps = [
        "//nana/common:base",
        "//nana/paint:paint",
        "//nana/gui:gui",
        "//nana/system:system",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "basis",
    srcs = [
        "basis.cpp",
    ],
    hdrs = [
        "basis.hpp",
    ],
    deps = [
        "//nana/common:base",
        "//nana/gui:gui",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "category",
    srcs = [
        "category.cpp",
    ],
    hdrs = [
        "category.hpp",
    ],
    deps = [
        "//nana/common:base",
        "//nana/gui:gui",
    ],
    visibility = ["//visibility:public"],
)

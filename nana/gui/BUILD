load("@rules_cc//cc:defs.bzl", "cc_library")

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
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "darwing",
    srcs = [
        "drawing.cpp",
    ],
    hdrs = [
        "drawing.hpp",
    ],
    deps = [
        "//nana/common:base",
        "//nana/gui/widget",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "programming_interface",
    srcs = [
        "programming_interface.cpp",
    ],
    hdrs = [
        "programming_interface.hpp",
    ],
    deps = [
        "//nana/common",
        "//nana/gui/detail:detail",
        "//nana/gui/widget",
        "//nana/paint:image",
    ]
)

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
        "//nana/gui:drawing",
        "//nana/system:system",
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

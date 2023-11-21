load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "detail",
    srcs = [
        "platform_abstraction.cpp",
        "platform_spec_posix.cpp",
        "platform_spec_windows.cpp",
    ],
    hdrs = [
        "platform_abstraction.hpp",
        "platform_abstraction_types.hpp",
        "platform_spec_selector.hpp",
        "text_reshaping.hpp",
    ],
    deps = [
        "//nana/common:base",
        "//nana/gui:gui",
        "//nana/paint:paint",
    ]
    visibility = ["//visibility:public"],
)

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
        "compact.hpp",
    ],
    deps = [
        "//nana/common",
        "//nana/gui/detail:detail",
        "//nana/gui/widget",
        "//nana/paint:image",
    ]
)

cc_library(
    name = "dragger",
    srcs = [
        "dragger.cpp",
    ],
    hdrs = [
        "dragger.hpp",
    ],
    deps = [
        "//nana/common:base",
        ":basis",
        ":programming_interface",
    ],
)

cc_library(
    name = "dragdrop",
    srcs = [
        "dragdrop.cpp",
    ],
    hdrs = [
        "dragdrop.hpp",
    ],
    deps = [
        ":basis",
        ":programming_interface",
        ":dragger",
    ],
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
    name = "effects",
    srcs = [
        "effects.cpp",
    ]
    hdrs = [
        "effects.hpp",
    ],
    deps = [
        "//nana/paint:graphics",
        ":programming_interface",
    ],
)

cc_library(
    name = "element",
    srcs = [
        "element.cpp",
    ],
    hdrs = [
        "element.hpp",
    ],
    deps = [
        "//nana/paint:graphics",
        "//nana/paint:image",
        "//nana/gui/detail:element_store",
        "//nana/gui/detail:bedrock",
        "//nana/pat:pat",
    ]
)

cc_library(
    name = "filebox",
    srcs = [
        "filebox.cpp",
    ],
    hdrs = [
        "filebox.hpp",
    ],
    deps = [
        ":basis",
        "//nana/gui/detail:bedrock",
        "//nana/filesystem:filesystem",
    ],
)

cc_library(
    name = "layout_utility",
    srcs = [
        "layout_utility.cpp",
    ],
    hdrs = [
        "layout_utility.hpp",
    ],
    deps = [
        ":basis",
    ],
)

cc_library(
    name = "msgbox",
    srcs = [
        "msgbox.cpp",
    ],
    hdrs = [
        "msgbox.hpp",
    ],
    deps = [
        ":basis",
        ":programming_interface",
        ":drawing",
        ":filebox",
        "//nana/gui/widgets/button",
        "//nana/gui/widgets/checkbox",
        "//nana/gui/widgets/combox",
        "//nana/gui/widgets/form",
        "//nana/gui/widgets/lable",
        "//nana/gui/widgets/panel",
        "//nana/gui/widgets/spinbox",
        "//nana/gui/widgets/picture",
        "//nana/gui/widgets/textbox",
        "//nana/common:base",
    ],
)

cc_library(
    name = "notifier",
    srcs = [
        "notifier.cpp",
    ],
    hdrs = [
        "notifier.hpp",
    ],
    deps = [
        ":basis",
        "//nana/gui/detail:general_events",
        "//nana/common:base",
        ":programming_interface",
        "//nana/gui/timer",
    ],
)

cc_library(
    name = "place",
    srcs = [
        "place.cpp",
    ],
    hdrs = [
        "place.hpp",
    ],
    deps = [
        ":basis",
        ":drager",
        ":drawing",
        ":programming_interface",
        "//nana/gui/widgets:label",
        "//nana/gui/widgets:panel",
    ],
)

cc_library(
    name = "screen",
    srcs = [
        "screen.cpp",
    ],
    hdrs = [
        "screen.hpp",
    ],
    deps = [
        ":basis",
        ":programming_interface",
        "//nana/gui/detail:native_window_interface",
    ],
)

cc_library(
    name = "state_cursor",
    srcs = [
        "state_cursor.cpp",
    ],
    hdrs = [
        "state_cursor.hpp",
    ],
    deps = [
        ":basis",
        "//nana/gui/detail:basic_window",
        "//nana/gui/detail:window_manager",
        "//nana/gui/detail:bedrock",
    ],
)

cc_library(
    name = "timer",
    srcs = [
        "timer.cpp",
    ],
    hdrs = [
        "timer.hpp",
    ],
    deps = [

    ],
)

load("@rules_cc//cc:defs.bzl", "cc_library")

# The very base part, without any dependency.
cc_library(
    name = "base",
    srcs = [
        "any.cpp",
        "datetime.cpp",
        "charset.cpp",
        "deploy.cpp",
        "stdc++.cpp",
        "unicode_bidi.cpp",
        "basic_types.cpp",
    ],
    hdrs = [
        "any.hpp",
        "c++defines.hpp",
        "config.hpp",
        "datetime.hpp",
        "key_type.hpp",
        "optional.hpp",
        "std_condition_variable.hpp",
        "std_mutex.hpp",
        "std_thread.hpp",
        "stdc++.hpp",
        "traits.hpp",
        "unicode_bidi.hpp",
        "verbose_preprocessor.hpp",
        "concepts.hpp",
        "charset.hpp",
        "deploy.hpp",
        "basic_types.hpp",
    ],
    visibility = ["//visibility:public"],
)

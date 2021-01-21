set(LIBCODEC_HTTP_SRC)

add_library(codec-http STATIC ${LIBCODEC_HTTP_SRC})
set_target_properties(codec-http PROPERTIES VERSION 0.0.1)

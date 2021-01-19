set(LIBCODEC_HTTP_SRC Decoder.cpp Decoder.h Encoder.cpp Encoder.h Request.cpp Request.h)

add_library(codec-http STATIC ${LIBCODEC_HTTP_SRC})
set_target_properties(codec-http PROPERTIES VERSION 0.0.1)

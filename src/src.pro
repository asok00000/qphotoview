TEMPLATE = app
TARGET   = qphotoview


SOURCES =               \
    main.cpp            \
    Exception.cpp       \
    Logger.cpp          \
    PhotoView.cpp       \
    PhotoDir.cpp        \
    Photo.cpp           \
    PrefetchCache.cpp   \
    Fraction.cpp


HEADERS =               \
    Exception.h         \
    Logger.h            \
    PhotoView.h         \
    PhotoDir.h          \
    Photo.h             \
    PrefetchCache.h     \
    Fraction.h


MOC_DIR     = .moc
OBJECTS_DIR = .obj

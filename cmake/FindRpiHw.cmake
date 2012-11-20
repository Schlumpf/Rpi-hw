# - Try to find Rpi-hw

#  RPI_HW_INCLUDE_DIRS
#  RPI_HW_LIBRARIES
#  RPI_HW_FOUND

FIND_PATH( RPI_HW_INCLUDE_DIR NAMES rpi-hw )
MARK_AS_ADVANCED( RPI_HW_INCLUDE_DIR )

FIND_LIBRARY( RPI_HW_LIBRARY NAMES rpihw )
MARK_AS_ADVANCED( RPI_HW_LIBRARY )

INCLUDE( FindPackageHandleStandardArgs )

FIND_PACKAGE_HANDLE_STANDARD_ARGS( RPI_HW DEFAULT_MSG RPI_HW_LIBRARY RPI_HW_INCLUDE_DIR )

IF ( RPI_HW_FOUND )

  SET( RPI_HW_LIBRARIES ${RPI_HW_LIBRARY} )
  SET( RPI_HW_INCLUDE_DIRS ${RPI_HW_INCLUDE_DIR} )

ENDIF ( RPI_HW_FOUND )


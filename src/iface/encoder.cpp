/* 
    Title --- iface/encoder.cpp

    Copyright (C) 2012 Giacomo Trudu - wicker25[at]gmail[dot]com

    This file is part of Rpi-hw.

    Rpi-hw is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation version 3 of the License.

    Rpi-hw is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Rpi-hw. If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _RPI_HW_IFACE_ENCODER_CPP_
#define _RPI_HW_IFACE_ENCODER_CPP_

#include <rpi-hw/iface/encoder.hpp>

#include <rpi-hw/utils.hpp>
#include <rpi-hw/utils-inl.hpp>

#include <rpi-hw/mutex.hpp>
#include <rpi-hw/mutex-inl.hpp>

#include <rpi-hw/thread.hpp>
#include <rpi-hw/thread-inl.hpp>

#include <rpi-hw/gpio.hpp>
#include <rpi-hw/gpio-inl.hpp>

#include <rpi-hw/iface/base.hpp>
#include <rpi-hw/iface/base-inl.hpp>

#include <rpi-hw/iface/output.hpp>
#include <rpi-hw/iface/output-inl.hpp>

#include <rpi-hw/iface/encoder-inl.hpp>

namespace rpihw { // Begin main namespace

namespace iface { // Begin interfaces namespace

encoder::encoder( uint8_t total, ... ) {

	// Initialize variable argument list
	va_list args;
	va_start( args, total );

	// Initialize the interface
	init( utils::varg< uint8_t, int >( args, total ) );

	// Clean variable argument list
	va_end( args );
}

encoder::~encoder() {

}

} // End of interfaces namespace

} // End of main namespace

#endif

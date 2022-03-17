# A very simple makefile full of shortcuts

# What port the arduino is on
ifndef SERIAL_DEV
	ifneq (,$(wildcard /dev/ttyUSB0))
		SERIAL_DEV = /dev/ttyUSB0
	else ifneq (,$(wildcard /dev/ttyACM0))
		SERIAL_DEV = /dev/ttyACM0
	else
		SERIAL_DEV = unknown
	endif
endif

.PHONY: build test

ALL: build

build:
	pio run

flash:
	pio run --target upload

clean:
	pio run --target clean

test:
	pio test --upload-port $(SERIAL_DEV)

# Monitor the serial (debug) output.
# Requires minicom
monitor: upload
	minicom -c on -D $(SERIAL_DEV) -b 115200

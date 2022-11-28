#include "algorithms.h"

// Problem 3.7 - Convert between all units of temperature.
void temperatureConversion(Temperature* input, UnitOfTemperature convertTo) {
    switch (convertTo) {
        case tCELSIUS: {
            switch (input->unit) {
                case tCELSIUS: return;
                case tFAHRENHEIT: {
                    input->value = (input->value - 32) * (5.0 / 9);
                    break;
                }
                case tKELVIN: {
                    input->value = input->value - 273.15;
                    break;
                }
            }
            break;
        }
        case tFAHRENHEIT: {
            switch (input->unit) {
                case tCELSIUS: {
                    input->value = (input->value * (9.0 / 5)) + 32;
                    break;
                }
                case tFAHRENHEIT: return;
                case tKELVIN: {
                    input->value = (input->value - 273.15) * (9.0 / 5) + 32;
                    break;
                }
            }
            break;
        }
        case tKELVIN: {
            switch (input->unit) {
                case tCELSIUS: {
                    input->value = input->value + 273.15;
                    break;
                }
                case tFAHRENHEIT: {
                    input->value = (input->value - 32) * (5.0 / 9) + 273.15;
                    break;
                }
                case tKELVIN: return;
            }
        }
        break;
    }

    input->unit = convertTo;
}

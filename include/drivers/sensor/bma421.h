/*
 * Copyright (c) 2020 Stephane Dorre
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMA421_H_
#define ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMA421_H_

#include <drivers/sensor.h>

enum bma421_channel {
	BMA421_CHAN_STEP_COUNTER = SENSOR_CHAN_PRIV_START,
	BMA421_CHAN_STEP_ENABLE,
};

/* If necessary at some point */
enum bma421_attribute {
	BMA421_ATTR_STEP_CNT_ENABLE = SENSOR_ATTR_PRIV_START,
	BMA421_ATTR_STEP_CNT_WATERMARK,
	BMA421_ATTR_STEP_CNT_RESET,
	BMA421_ATTR_STEP_CNT_PARAM,
	BMA421_ATTR_STEP_DTC_ENABLE,
	BMA421_ATTR_ANY_MOT_CONFIG,
	BMA421_ATTR_NO_MOT_CONFIG,
	BMA421_ATTR_VERSION_CONFIG,
};

enum bma421_trigger {
	BMA421_TRIG_STEP_COUNT = SENSOR_TRIG_PRIV_START,
	BMA421_TRIG_STEP_DETECT,
	BMA421_TRIG_NO_MOTION,
};

#endif /* ZEPHYR_INCLUDE_DRIVERS_SENSOR_BMA421_H_ */

/*********************************************************************
 *
 * Copyright 2012 the original author or authors.
 * See the NOTICE file distributed with this work for additional
 * information regarding copyright ownership.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *********************************************************************/
#ifndef ROSPILOT_H264_UTILS_H
#define ROSPILOT_H264_UTILS_H

#include<vector>

namespace rospilot {

int nextNALStart(std::vector<uint8_t> &data, size_t start, uint8_t *nalType);

void tryExtractSPSandPPS(std::vector<uint8_t> &data, 
        std::vector<uint8_t> &sps_out,
        std::vector<uint8_t> &pps_out);
}

#endif

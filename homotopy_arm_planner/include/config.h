/*
 * Copyright (c) 2018, Ramkumar Natarajan
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Carnegie Mellon University nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
/*!
 * \file   config.h
 * \author Ramkumar Natarajan (rnataraj@cs.cmu.com)
 * \date   September 2018
 */

#define DEBUG true

#define NUM_DOF 5

#define MIN_JOINT_ANGLE 0
#define MAX_JOINT_ANGLE 2*M_PI

#define DISCRETIZATION 0.1
#define DOUBLE_TO_INT_FACTOR 1E4

#define HEURISTIC_INFLATION 3
#define USE_HSIGNATURE_HEURISTIC true

#define SIGN_CHAR_MISMATCH_PENALTY 1
#define SIGN_LENGTH_MISMATCH_PENALTY 2

#define COST_TYPE_JOINT_SPACE false
#define COST_TYPE_TASK_SPACE false
#define COST_TYPE_HOMOTOPY_SPACE true

#define AVOID_SELF_COLLISION false

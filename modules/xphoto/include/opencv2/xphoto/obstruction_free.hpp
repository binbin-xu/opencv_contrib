/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009-2011, Willow Garage Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef __OPENCV_OBSTRUCTION_FREE_HPP__
#define __OPENCV_OBSTRUCTION_FREE_HPP__

/** @file
@date June 18, 2017
@author Binbin Xu
*/

#include <opencv2/core.hpp>

namespace cv
{
namespace xphoto
{

//! @addtogroup xphoto
//! @{


    /** @brief The function implements a general obstruction free approach that can remove occlusions and reflections from input image sequences without manual masks.

    See the original paper @cite Xue2015ObstructionFree for more details.

    @param srcImgs source image sequences, involving translation motions.
    @param dst Obstruction-removed destination image, corresponding to the reference image, with the same size and type. In general, the reference image is the center frame of the input image.
    @param mask mask (CV_8UC1), where zero pixels indicate area to be estimated to be occlusions.
    */
    CV_EXPORTS void obstructionFree(const std::vector <Mat> &srcImgs, Mat &dst, Mat &mask);

//! @}

}
}

#endif // __OPENCV_INPAINTING_HPP__

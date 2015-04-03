//
//  AKAudioInputFFTPlot.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 2/8/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import "AKPlotView.h"

/// Plots the FFT of the audio input
IB_DESIGNABLE
@interface AKAudioInputFFTPlot : AKPlotView

@property IBInspectable AKColor *lineColor;
@property IBInspectable CGFloat lineWidth;

@end

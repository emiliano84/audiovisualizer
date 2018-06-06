﻿#pragma once

#include "DiscreteVUBar.g.h"
#include "VisualizerControl.h"

namespace winrt::AudioVisualizer::implementation
{
    struct DiscreteVUBar : DiscreteVUBarT<DiscreteVUBar, AudioVisualizer::implementation::VisualizerControl>
    {
		virtual void OnDraw(Microsoft::Graphics::Canvas::CanvasDrawingSession drawingSession, VisualizationDataFrame dataFrame, Windows::Foundation::IReference<Windows::Foundation::TimeSpan> presentationTime);
	public:
		DiscreteVUBar() = default;

		com_array<AudioVisualizer::MeterBarLevel> Levels();
		void Levels(array_view<AudioVisualizer::MeterBarLevel const> value);
		Windows::UI::Xaml::Controls::Orientation Orientation();
		void Orientation(Windows::UI::Xaml::Controls::Orientation const& value);
		uint32_t ChannelIndex();
		void ChannelIndex(uint32_t value);
		Windows::UI::Xaml::Thickness RelativeElementMargin();
		void RelativeElementMargin(Windows::UI::Xaml::Thickness const& value);
		Windows::UI::Color UnlitElement();
		void UnlitElement(Windows::UI::Color const& value);


    };
}

namespace winrt::AudioVisualizer::factory_implementation
{
    struct DiscreteVUBar : DiscreteVUBarT<DiscreteVUBar, implementation::DiscreteVUBar>
    {
    };
}

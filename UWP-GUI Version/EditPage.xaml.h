﻿//
// EditPage.xaml.h
// Declaration of the EditPage class
//

#pragma once

#include "EditPage.g.h"
#include "GraphManaged.h"

namespace Automata
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class EditPage sealed
	{
	public:
		EditPage();
		property int OptimisationMode {
			int get() { return this->optimisatioMode; }
			void set(int v) { this->optimisatioMode = v; }
		}
	private:
		GraphManaged^ g;
		int optimisatioMode = 0;
		Windows::Foundation::EventRegistrationToken textChanging;
		Platform::String^ data;
		void InitGraph();
		void SplitView_PaneClosing(Windows::UI::Xaml::Controls::SplitView^ sender, Windows::UI::Xaml::Controls::SplitViewPaneClosingEventArgs^ args);
		void AddEdge_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void AddNode_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void OpenPane_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void editPage_PaneOpening(Windows::UI::Xaml::Controls::SplitView^ sender, Platform::Object^ args);
		void OnModifiedEvent(Object^ sender, bool isComplete);
		void separator_ManipulationDelta(Platform::Object^ sender, Windows::UI::Xaml::Input::ManipulationDeltaRoutedEventArgs^ e);
		void separator_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void separator_PointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void OnUpdateCompleteEvent(Platform::Object^ sender);
		void Stop_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Render_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Optimise_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Draw_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Clear_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void OnTextChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::TextChangedEventArgs^ e);
		void Revert_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Edit_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void OnEdgeInserted(int s, int f, Platform::String^ w);
		void OnNodeStatusUpdated(int s, bool isEnd, bool isStart);
		void OnSizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);
		void OnPaneOpened(Windows::UI::Xaml::Controls::SplitView^ sender, Platform::Object^ args);
		void PrevUpdate_Toggled(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void DeleteButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Mode_Toggled(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void src_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
		void weight_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
		void Grid_SizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);
		void BoardsHolder_SizeChanged(Platform::Object^ sender, Windows::UI::Xaml::SizeChangedEventArgs^ e);
	};
}

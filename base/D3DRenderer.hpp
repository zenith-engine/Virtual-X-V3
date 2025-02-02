#pragma once
#include "ImGui/imgui.h"
namespace base
{
	class D3DRenderer
	{
	public:
		explicit D3DRenderer();
		~D3DRenderer() noexcept;
		D3DRenderer(D3DRenderer const&) = delete;
		D3DRenderer(D3DRenderer&&) = delete;
		D3DRenderer& operator=(D3DRenderer const&) = delete;
		D3DRenderer& operator=(D3DRenderer&&) = delete;

		/**
		 * \brief Prepares the frame.
		 */
		void BeginFrame();

		/**
		 * \brief Finishes the frame and renders.
		 */
		void EndFrame();

		/**
		 * \brief Invalidates rendering resources
		 */
		void PreResize();

		/**
		 * \brief Finishes the frame and renders.
		 */
		void PostResize();

		/**
		 * \brief Processes input messages.
		 */
		void WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
		bool LoadTextureFromFile(const char* filename, ID3D11Device* d3dDevice, ID3D11ShaderResourceView** out_srv, int* out_width, int* out_height);
	public:
		ImFontConfig m_fontConfig{};
		ImFont* m_notifyFont{};
		ImFont* m_headerFont{};
	public:
		ID3D11ShaderResourceView* m_Header{};
		ImageDimensions m_HeaderSize = { 0, 0 };
	private:
		IDXGISwapChain* m_Swapchain{};
		ID3D11Device* m_Device{};
		ID3D11DeviceContext* m_Context{};
	};

	inline std::unique_ptr<D3DRenderer> g_D3DRenderer;
}

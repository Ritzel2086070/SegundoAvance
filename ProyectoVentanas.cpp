#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>
#include <strsafe.h>
#include <winuser.h>
#include <olectl.h>
#include <shobjidl.h> 
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include "resource.h"
using namespace std;

HWND h_VentanaIS = 0;
HWND h_VentanaRU;
HWND h_VentanaAU;
HWND h_VentanaPP;
HWND h_VentanaNA;
HWND h_VentanaNC;
HWND h_VentanaNc;
HWND h_VentanaLA;
HWND h_VentanaLC;
HWND h_Ventanalc;
HWND h_VentanaBA;
HWND h_VentanaBC;
HWND h_VentanaAA;
HWND h_VentanaAC;
HWND h_VentanaNP;
HWND h_VentanaBP;
HWND h_VentanaAP;
HWND h_VentanaLP;
HWND h_VentanaLConsumo;

HWND h_ListA;
HWND h_ListAa;
HWND h_ListC;
HWND h_ListAC;
HWND h_Listc;
HWND h_ListAc;
HWND h_ListP;
HWND h_ListConsumo;
HWND h_ListPBaja;

HWND h_IS_CB_Comercio;

HWND h_PictureControl_IS_FotoUsuario;
HBITMAP h_Bitma_IS_FotoUsuario;
wchar_t arreglofoto[256];

HMENU h_MenuAdministradores;
HMENU h_MenuCajeros;
HMENU h_submenu;

HINSTANCE hInstance;

//Pantallas
#define IDD_D_InicioSesion              101
#define IDD_D_RegistroAdmin             103
#define IDD_D_VPantallaPrincipal        107
#define IDD_D_ActualizarUsuario         109
#define IDD_D_AltaAdmin                 113
#define IDD_D_AltaCajero                115
#define IDD_D_ListadoAdmin              117
#define IDD_D_ListaCajeros              119
#define IDD_D_BajaAdmin                 121
#define IDD_D_BajaCajero                123
#define IDD_D_ActualizarAdmin           125
#define IDD_D_ActualizarCajero          127
#define IDD_D_AltaCliente               129
#define IDD_D_BajaClientes              131
#define IDD_D_ListaClientes             133
#define IDD_D_ActualizarCliente         135
#define IDD_D_AltaPromocion             137
#define IDD_D_BajaPromocion             139
#define IDD_D_ListadoPromociones        141
#define IDD_D_ActualizarPromocion       143
#define IDD_D_AltaConsumos              145
#define IDD_D_ListadoConsumo            147

#define IDD_D_VPantallPrincipalCajeros  152

//Menus
#define IDR_MenuAdministradores         150
#define IDR_MenuCajeros                 151

//Elementos Menu Admin
#define ID_MA_Consumos_ListaConsumos    40128
#define ID_MA_Consumo_AltaConsumo       40129
#define ID_MA_P_ListaPromos             40130
#define ID_MA_P_BajaPromo               40131
#define ID_MA_P_AltaPromo               40132
#define ID_MA_c_ListaClientes           40133
#define ID_MA_c_AltaCliente             40134
#define ID_MA_C_ListaCajeros            40135
#define ID_MA_A_ListaAdmins             40136
#define ID_MA_C_AltaCajeros             40137
#define ID_MA_A_AltaAdmin               40138
#define ID_MA_U_Salir                   40139
#define ID_MA_U_CerrarSesion            40140
#define ID_MA_U_ActualizarUsuario       40141

//Elementos Menu Cajeros
#define ID_MC_U_ActualizarUsuario       40151
#define ID_MC_U_CerrarSesion            40152
#define ID_MC_U_Salir                   40153
#define ID_MC_c_AltaClientes            40154
#define ID_MC_c_ListaClientes           40155
#define ID_MC_c_ActualizarClientes      40156
#define ID_MC_P_ListaPromos             40157
#define ID_MC_Consumo_AltaConsumo       40158
#define ID_MC_Consumo_ListaConsumos     40159

//Botones
#define IDC_B_IS_IniciarSesion          1004
#define IDC_B_IS_RegistrarUsuario       1005
#define IDC_B_IS_Salir                  1006
#define IDC_B_RA_Regresar               1012
#define IDC_B_RA_RegistrarUsuario       1013
#define IDC_B_AU_Regresar               1005
#define IDC_B_AU_Guardar                1004

#define IDC_B_NA_Guardar                1004
#define IDC_B_NA_Regresar               1005

#define IDC_B_NC_Guardar                1043
#define IDC_B_NC_Regresar               1044

#define IDC_B_LA_Actualizar             1004
#define IDC_B_LA_Eliminar               1005
#define IDC_B_LA_Regresar               1006

#define IDC_B_LC_Actualizar             1079
#define IDC_B_LC_Eliminar               1080
#define IDC_B_LC_Regresar               1081

#define IDC_B_BA_Eliminar               1095
#define IDC_B_BA_Regresar               1096

#define IDC_B_BC_Eliminar               1110
#define IDC_B_BC_Regresar               1111

#define IDC_B_AA_Guardar                1124
#define IDC_B_AA_Regresar               1125

#define IDC_B_AC_Guardar                1139
#define IDC_B_AC_Regresar               1140

#define IDC_B_Ncliente_Guardar          1155
#define IDC_B_Ncliente_Regresar         1156

#define IDC_B_Bcliente_Eliminar         1171
#define IDC_B_Bcliente_Regresar         1172

#define IDC_B_Lclientes_Actualizar      1188
#define IDC_B_Lclientes_Eliminar        1189
#define IDC_B_Lclientes_Regresar        1190

#define IDC_B_NP_Guardar                1215
#define IDC_B_NP_Regresar               1216

#define IDC_B_Acliente_Guardar          1205
#define IDC_B_Acliente_Regresar         1206

#define IDC_B_BP_Eliminar               1225
#define IDC_B_BP_Regresar               1226

#define IDC_B_LP_Eliminar               1227
#define IDC_B_LP_Regresar               1228
#define IDC_B_LP_Actualizar             1229

#define IDC_B_AP_Regresar               1249
#define IDC_B_AP_Actualizar             1250

#define IDC_B_NConsumo_Guardar          1268
#define IDC_B_NConsumo_Regresar         1269

#define IDC_B_LConsumo_Guardar          1284
#define IDC_B_LConsumo_Regresar         1285

//LISTBOX
#define IDC_LB_A_Lista                  1051
#define IDC_LB_C_Lista                  1065
#define IDC_LB_ListadoConsumo           1270
#define IDC_LB_cli_Lista                1297
#define IDC_LB_P_Lista                  1298
#define IDC_LB_Pbaja_Lista              1299

BOOL CALLBACK MsgDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_RegistrarUsuario(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ActualizarUsuario(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_PantallaPrincipal(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_PantallaPrincipalCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

BOOL CALLBACK Pantalla_NuevoAdministrador(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_NuevoCajero(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_NuevoCliente(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_NuevaPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_NuevoConsumo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

BOOL CALLBACK Pantalla_ListaAdmins(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ListaCajeros(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ListaClientes(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ListaPromo(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ListaConsumo(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

BOOL CALLBACK Pantalla_BajaAdmins(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_BajaCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_BajaClientes(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_BajaPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

BOOL CALLBACK Pantalla_ActualizarAdmins(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ActualizarCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ActualizarClientes(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_ActualizarPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

BOOL CALLBACK Pantalla_AdvertenciaBorrar(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK Pantalla_AdvertenciaSalir(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

//------------------------------------------------------------------------------------------------DATOS DUMMY
typedef struct
{
	TCHAR achUserName[12];
	TCHAR achName[MAX_PATH];
	TCHAR achAlias[12];
	TCHAR achPassword[12];
	TCHAR achComercio[12];
	TCHAR achUsuario[12];
	TCHAR achCorreo[MAX_PATH];
	TCHAR achDate[12];
} Player;

typedef struct
{
	TCHAR achUserName[12];
	TCHAR achName[MAX_PATH];
	TCHAR achAlias[12];
	TCHAR achPassword[12];
	TCHAR achComercio[12];
	TCHAR achUsuario[12];
	TCHAR achCorreo[MAX_PATH];
	TCHAR achDate[12];
} Noobs;

typedef struct
{
	TCHAR achName[12];
	int achmonto;
	int achporcentaje;
} Promociones;

typedef struct
{
	TCHAR achConsumo[12];
	TCHAR achNameCliente[MAX_PATH];
	int achmonto;
	int achsubtotal;
	int achdescuento;
} Consumos;

Player Roster[] =
{
	{TEXT("Jyo10"), TEXT("Pai, Jyothi"), TEXT("Cap"), TEXT("456"), TEXT("Hogwarts"), TEXT("Admin"), TEXT("jyo09@gmail.com"), TEXT("21/09/20")},
	{TEXT("MichaelA"), TEXT("Anderberg, Michael"), TEXT("Mike"), TEXT("123"), TEXT("Nintendo"), TEXT("Admin"), TEXT("mike09@gmail.com"), TEXT("03/9/20")},
	{TEXT("Rui99"), TEXT("Raposo, Rui"), TEXT("Ralphie"), TEXT("789"), TEXT("Hogwarts"), TEXT("Admin"), TEXT("ralph09@gmail.com"), TEXT("29/10/20")},
	{TEXT("ThomB"), TEXT("Bouchard, Thomas"), TEXT("Tommy"), TEXT("456"), TEXT("Nintendo"), TEXT("Admin"), TEXT("tom09@gmail.com"), TEXT("29/10/20")},
	{TEXT("DavidN"), TEXT("Camp, David"), TEXT("Charming"), TEXT("123"), TEXT("Hogwarts"), TEXT("Admin"), TEXT("charm09@gmail.com"), TEXT("11/11/20")},
};

Noobs Cajeros[] =
{
	{TEXT("JoniT"), TEXT("Haas, Jonathan"), TEXT("Batsy"), TEXT("123"), TEXT("HoneyB"), TEXT("Cajero"), TEXT("bat09@gmail.com"), TEXT("12/10/20")},
	{TEXT("KerimUwU"), TEXT("Hanif, Kerim"), TEXT("JD"), TEXT("789"), TEXT("Westerbug"), TEXT("Cajero"), TEXT("kerim09@gmail.com"), TEXT("01/02/20")},
	{TEXT("JacekJ"), TEXT("Jelitto, Jacek"), TEXT("Jackie"), TEXT("456"), TEXT("HoneyB"), TEXT("Cajero"), TEXT("jackie09@gmail.com"), TEXT("13/01/20")},
	{TEXT("Bra10"), TEXT("Joseph, Brad"), TEXT("BradBoy"), TEXT("123"), TEXT("Westerbug"), TEXT("Cajero"), TEXT("brad09@gmail.com"), TEXT("30/05/20")},
	{TEXT("Ivo44"), TEXT("Salmre, Ivo "), TEXT("I.V.O."), TEXT("789"), TEXT("HoneyB"), TEXT("Cajero"), TEXT("ivo09@gmail.com"), TEXT("17/11/20")},
	{TEXT("FranFine"), TEXT("Kohl, Franz"),TEXT("TheNanny"), TEXT("456"), TEXT("Westerbug"), TEXT("Cajero"), TEXT("fran09@gmail.com"), TEXT("02/12/20")},
};

Promociones Promos[] = {
	{TEXT("CookiesE"), 140, 20},
	{TEXT("Cake"), 90, 25},
	{TEXT("Brownie"), 110, 15},
	{TEXT("Donut"), 80, 10},
	{TEXT("Bisquet"), 55, 5},
};

Consumos Cons[] = {
	{TEXT("Galletas"), TEXT("Haas, Jonathan"), 140, 140, 20},
	{TEXT("Pastel"), TEXT("Anderberg, Michael"), 90, 180, 25},
	{TEXT("Flan"), TEXT("Bouchard, Thomas"), 110, 110, 15},
	{TEXT("Brownie"), TEXT("Joseph, Brad"), 80, 160, 10},
	{TEXT("Pay"), TEXT("Kohl, Franz"), 55, 165, 5},
};

//-----------------------------------------------------------------------------------------------------------------FUNCIONES
void funcion_abrir(HWND padre)//Con esta funcion se abre un archivo
{
	OPENFILENAME openfilename;

	TCHAR szFile[MAX_PATH + 1];
	ZeroMemory(szFile, sizeof(szFile));

	ZeroMemory(&openfilename, sizeof(OPENFILENAME));
	openfilename.lStructSize = sizeof(OPENFILENAME);
	openfilename.hwndOwner = padre;
	openfilename.lpstrFile = szFile;
	openfilename.nMaxFile = MAX_PATH;
	openfilename.nFilterIndex = 1;
	openfilename.lpstrFileTitle = NULL;
	openfilename.nMaxFileTitle = 0;
	openfilename.lpstrInitialDir = NULL;
	openfilename.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;

	if (GetOpenFileName(&openfilename))
	{
		wcscpy_s(arreglofoto, openfilename.lpstrFile);
		//display_file(openfilename.lpstrFile/, paramEdit/); 
		//MessageBox(NULL, NULL, NULL, MB_ICONEXCLAMATION);
	}
	else
	{
		MessageBox(NULL, TEXT("No se pudo abrir este archivo"), TEXT("File I/O Error"), MB_ICONSTOP);
	}
}

//--------------------------------------------------------------------------------------------------------------WINAPI
int WINAPI wWinMain(_In_ HINSTANCE hInst, _In_opt_ HINSTANCE hPrevInstance, _In_ PWSTR pCmdLine, _In_ int nCmdShow) {
	h_VentanaIS = CreateDialog(hInst, MAKEINTRESOURCE(IDD_D_InicioSesion), 0, (DLGPROC)MsgDlgProc);
	ShowWindow(h_VentanaIS, nCmdShow);
	MSG msg;
	ZeroMemory(&msg, sizeof(MSG));
	while (GetMessage(&msg, 0, 0, 0)) {
		if (h_VentanaIS == 0 || !IsDialogMessage(h_VentanaIS, &msg)) {
			TranslateMessage(&msg);
			DispatchMessageW(&msg);
		}
	}
	return (int)msg.wParam;
}

BOOL CALLBACK MsgDlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE,GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_IS_CB_Comercio = GetDlgItem(hwnd, IDC_CB_IS_Comercio);

		SendMessage(h_IS_CB_Comercio, CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Nintendo");
		SendMessage(h_IS_CB_Comercio, CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Hogwarts");
		SendMessage(h_IS_CB_Comercio, CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Westerbug");
		SendMessage(h_IS_CB_Comercio, CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Baticueva");

		SendMessage(h_IS_CB_Comercio, CB_SETCURSEL, (WPARAM)0, (LPARAM)0);

		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_CB_IS_Comercio:
			switch (HIWORD(wParam))
			{
			case CBN_SELCHANGE:
				LRESULT indice_combo = SendMessage((HWND)lParam, (UINT)CB_GETCURSEL,
					(WPARAM)0, (LPARAM)0);
			}
			break;

		case IDC_B_IS_IniciarSesion:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarUsuario), hwnd, (DLGPROC)Pantalla_ActualizarUsuario);
			break;
		case IDC_B_IS_RegistrarUsuario:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_RegistroAdmin), hwnd, (DLGPROC)Pantalla_RegistrarUsuario);
			break;
		case IDC_B_IS_Salir:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Adevertencia_Exit), hwnd, (DLGPROC)Pantalla_AdvertenciaSalir);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(h_VentanaIS);
		return TRUE;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return TRUE;
		break;
	}
	return FALSE;
}

//---------------------------------------------------------------------------------------------------------------------------USUARIO

BOOL CALLBACK Pantalla_RegistrarUsuario(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_RA_RegistrarUsuario:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_RA_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ActualizarUsuario(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_PC_IS_FotoUsu:
			h_Bitma_IS_FotoUsuario = (HBITMAP)LoadImage(NULL, L"C:User/Images/...", IMAGE_BITMAP, 120, 150, LR_LOADFROMFILE);

			break;
		case IDC_B_AU_SubirFoto:
			funcion_abrir(hwnd);// MessageBox(NULL, NULL, NULL, MB_ICONEXCLAMATION);
			GetDlgItem(hwnd, IDC_PC_IS_FotoUsu);
			h_Bitma_IS_FotoUsuario = (HBITMAP)LoadImage(NULL, arreglofoto, IMAGE_BITMAP, 120, 150, LR_LOADFROMFILE);
			SendDlgItemMessage(hwnd, IDC_PC_IS_FotoUsu, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)h_Bitma_IS_FotoUsuario);
			break;
		case IDC_B_AU_Guardar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_VPantallaPrincipal), hwnd, (DLGPROC)Pantalla_PantallaPrincipal);
			//DialogBox(NULL, MAKEINTRESOURCE(IDD_D_VPantallPrincipalCajeros), hwnd, (DLGPROC)Pantalla_PantallaPrincipalCajeros);
			break;
		case IDC_B_AU_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//-------------------------------------------------------------------------------------------------------------PANTALLA ADMINISTRADORES

BOOL CALLBACK Pantalla_PantallaPrincipal(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_MenuAdministradores = LoadMenu(hInstance, MAKEINTRESOURCE(IDR_MenuAdministradores));
		SetMenu(hwnd, h_MenuAdministradores);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {

		case ID_MA_U_ActualizarUsuario: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarUsuario), hwnd, (DLGPROC)Pantalla_ActualizarUsuario);
			break;
		case ID_MA_U_CerrarSesion:
			EndDialog(hwnd, wParam);
			break;
		case ID_MA_U_Salir:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Adevertencia_Exit), hwnd, (DLGPROC)Pantalla_AdvertenciaSalir);
			break;
		case ID_MA_A_AltaAdmin: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaAdmin), hwnd, (DLGPROC)Pantalla_NuevoAdministrador);
			break;
		case ID_MA_C_AltaCajeros: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaCajero), hwnd, (DLGPROC)Pantalla_NuevoCajero);
			break;
		case ID_MA_A_ListaAdmins: //Modeless
			h_VentanaLA = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListadoAdmin), hwnd, (DLGPROC)Pantalla_ListaAdmins);
			ShowWindow(h_VentanaLA, SW_SHOW);
			break;
		case ID_MA_C_ListaCajeros: //Modeless
			h_VentanaLC = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListaCajeros), hwnd, (DLGPROC)Pantalla_ListaCajeros);
			ShowWindow(h_VentanaLC, SW_SHOW);
			break;
		case ID_MA_c_AltaCliente: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaCliente), hwnd, (DLGPROC)Pantalla_NuevoCliente);
			break;
		case ID_MA_c_ListaClientes: //Modeless
			h_Ventanalc = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListaClientes), hwnd, (DLGPROC)Pantalla_ListaClientes);
			ShowWindow(h_Ventanalc, SW_SHOW);
			break;
		case ID_MA_P_AltaPromo: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaPromocion), hwnd, (DLGPROC)Pantalla_NuevaPromo);
			break;
		case ID_MA_P_BajaPromo: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_BajaPromocion), hwnd, (DLGPROC)Pantalla_BajaPromo);
			break;
		case ID_MA_P_ListaPromos: //Modeless
			h_VentanaLP = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListadoPromociones), hwnd, (DLGPROC)Pantalla_ListaPromo);
			ShowWindow(h_VentanaLP, SW_SHOW);
			break;
		case ID_MA_Consumo_AltaConsumo: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaConsumos), hwnd, (DLGPROC)Pantalla_NuevoConsumo);
			break;
		case ID_MA_Consumos_ListaConsumos: //Modeless
			h_VentanaLConsumo = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListadoConsumo), hwnd, (DLGPROC)Pantalla_ListaConsumo);
			ShowWindow(h_VentanaLConsumo, SW_SHOW);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//------------------------------------------------------------------------------------------------------------PANTALLA PRINCIPAL CAJEROS

BOOL CALLBACK Pantalla_PantallaPrincipalCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_MenuCajeros = LoadMenu(hInstance, MAKEINTRESOURCE(IDR_MenuCajeros));
		SetMenu(hwnd, h_MenuCajeros);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case ID_MC_U_ActualizarUsuario: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarUsuario), hwnd, (DLGPROC)Pantalla_ActualizarUsuario);
			break;
		case ID_MC_U_CerrarSesion:
			EndDialog(hwnd, wParam);
			break;
		case ID_MC_U_Salir:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Adevertencia_Exit), hwnd, (DLGPROC)Pantalla_AdvertenciaSalir);
			break;
		case ID_MC_c_AltaClientes: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaCliente), hwnd, (DLGPROC)Pantalla_NuevoCliente);
			break;
		case ID_MC_c_ActualizarClientes: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarCliente), hwnd, (DLGPROC)Pantalla_ActualizarClientes);
			break;
		case ID_MC_c_ListaClientes: //Modeless
			h_Ventanalc = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListaClientes), hwnd, (DLGPROC)Pantalla_ListaClientes);
			ShowWindow(h_Ventanalc, SW_SHOW);
			break;
		case ID_MC_P_ListaPromos: //Modeless
			h_VentanaLP = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListadoPromociones), hwnd, (DLGPROC)Pantalla_ListaPromo);
			ShowWindow(h_VentanaLP, SW_SHOW);
			break;
		case ID_MC_Consumo_AltaConsumo: //Modal
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_AltaConsumos), hwnd, (DLGPROC)Pantalla_NuevoConsumo);
			break;
		case ID_MC_Consumo_ListaConsumos: //Modeless
			h_VentanaLConsumo = CreateDialog(NULL, MAKEINTRESOURCE(IDD_D_ListadoConsumo), hwnd, (DLGPROC)Pantalla_ListaConsumo);
			ShowWindow(h_VentanaLConsumo, SW_SHOW);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//-------------------------------------------------------------------------------------------------------------------------------ADMINS

BOOL CALLBACK Pantalla_NuevoAdministrador(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_NA_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_NA_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ListaAdmins(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListA = GetDlgItem(hwnd, IDC_LB_A_Lista);
		for (int i = 0; i < ARRAYSIZE(Roster); i++)
		{
			int pos = (int)SendMessage(h_ListA, LB_ADDSTRING, 0,
				(LPARAM)Roster[i].achName);
			// Set the array index of the player as item data.
			// This enables us to retrieve the item from the array
			// even after the items are sorted by the list box.
			SendMessage(h_ListA, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		// Set input focus to the list box.
		SetFocus(h_ListA);

		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_A_Lista: {
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
			{
				h_ListA = GetDlgItem(hwnd, IDC_LB_A_Lista);

				// Get selected index.
				int lbItem = (int)SendMessage(h_ListA, LB_GETCURSEL, 0, 0);

				// Get item data.
				int i = (int)SendMessage(h_ListA, LB_GETITEMDATA, lbItem, 0);

				// Do something with the data from Roster[i]
				TCHAR buff[MAX_PATH];
				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achUserName);
				SetDlgItemText(hwnd, IDC_E_LA_NombreUsuario, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achName);
				SetDlgItemText(hwnd, IDC_E_LA_NombreCompleto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achAlias);
				SetDlgItemText(hwnd, IDC_E_LA_Alias, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achPassword);
				SetDlgItemText(hwnd, IDC_E_LA_Contra, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achComercio);
				SetDlgItemText(hwnd, IDC_E_LA_Comercio, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achUsuario);
				SetDlgItemText(hwnd, IDC_E_LA_TipoUsu, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_LA_Actualizar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarAdmin), hwnd, (DLGPROC)Pantalla_ActualizarAdmins);
			break;
		case IDC_B_LA_Eliminar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_BajaAdmin), hwnd, (DLGPROC)Pantalla_BajaAdmins);
			break;
		case IDC_B_LA_Regresar:
			DestroyWindow(h_VentanaLA);
			return TRUE;
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		return TRUE;
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_BajaAdmins(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_BA_Eliminar:
			//MessageBox(NULL, (LPCWSTR)L"Esta seguro de borrar el usuario", (LPCWSTR)L"Aviso", MB_ICONWARNING);
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Advertencia_Borrar), hwnd, (DLGPROC)Pantalla_AdvertenciaBorrar);
			break;
		case IDC_B_BA_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ActualizarAdmins(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListAa = GetDlgItem(hwnd, IDC_L_AA_ListaUsuarios);
		for (int i = 0; i < ARRAYSIZE(Roster); i++)
		{
			int pos = (int)SendMessage(h_ListAa, LB_ADDSTRING, 0,
				(LPARAM)Roster[i].achName);
			SendMessage(h_ListAa, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListAa);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_L_AA_ListaUsuarios: {
			switch (HIWORD(wParam))
			{
			case LBN_SELCHANGE:
			{
				h_ListA = GetDlgItem(hwnd, IDC_L_AA_ListaUsuarios);
				int lbItem = (int)SendMessage(h_ListA, LB_GETCURSEL, 0, 0);
				int i = (int)SendMessage(h_ListA, LB_GETITEMDATA, lbItem, 0);

				TCHAR buff[MAX_PATH];
				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achUserName);
				SetDlgItemText(hwnd, IDC_E_AA_NombreUsuario, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achName);
				SetDlgItemText(hwnd, IDC_E_AA_NombreCompleto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achAlias);
				SetDlgItemText(hwnd, IDC_E_AA_Alias, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achPassword);
				SetDlgItemText(hwnd, IDC_E_AA_Contra, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achComercio);
				SetDlgItemText(hwnd, IDC_E_AA_Comercio, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[i].achUsuario);
				SetDlgItemText(hwnd, IDC_E_AA_TipoUsu, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_AA_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_AA_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//-----------------------------------------------------------------------------------------------------------------------------CAJEROS

BOOL CALLBACK Pantalla_NuevoCajero(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_NC_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_NC_Regresar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ListaCajeros(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListC = GetDlgItem(hwnd, IDC_LB_C_Lista);
		for (int i = 0; i < ARRAYSIZE(Cajeros); i++)
		{
			int pos = (int)SendMessage(h_ListC, LB_ADDSTRING, 0,
				(LPARAM)Cajeros[i].achName);
			SendMessage(h_ListC, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListC);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_C_Lista: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_ListC = GetDlgItem(hwnd, IDC_LB_C_Lista);
			int lbItemC = (int)SendMessage(h_ListC, LB_GETCURSEL, 0, 0);
			int iC = (int)SendMessage(h_ListC, LB_GETITEMDATA, lbItemC, 0);

			TCHAR buff[MAX_PATH];
			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achUserName);
			SetDlgItemText(hwnd, IDC_E_LC_NombreUsuario, buff);

			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achName);
			SetDlgItemText(hwnd, IDC_E_LC_NombreCompleto, buff);

			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achAlias);
			SetDlgItemText(hwnd, IDC_E_LC_Alias, buff);

			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achPassword);
			SetDlgItemText(hwnd, IDC_E_LC_Contra, buff);

			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achComercio);
			SetDlgItemText(hwnd, IDC_E_LC_Comercio, buff);

			StringCbPrintf(buff, ARRAYSIZE(buff),
				TEXT("%s"),
				Cajeros[iC].achUsuario);
			SetDlgItemText(hwnd, IDC_E_LC_TipoUsu, buff);
			return TRUE;
			}
			}	
		}
			break;
		case IDC_B_LC_Actualizar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarCajero), hwnd, (DLGPROC)Pantalla_ActualizarCajeros);
			break;
		case IDC_B_LC_Eliminar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_BajaCajero), hwnd, (DLGPROC)Pantalla_BajaCajeros);
			break;
		case IDC_B_LC_Regresar:
			DestroyWindow(h_VentanaLC);
			return TRUE;
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		return TRUE;
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_BajaCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_BC_Eliminar:
			//MessageBox(NULL, (LPCWSTR)L"Esta seguro de borrar el usuario", (LPCWSTR)L"Aviso", MB_ICONWARNING);
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Advertencia_Borrar), hwnd, (DLGPROC)Pantalla_AdvertenciaBorrar);
			break;
		case IDC_B_BC_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ActualizarCajeros(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListAC = GetDlgItem(hwnd, IDC_L_AC_ListaCajeros);
		for (int i = 0; i < ARRAYSIZE(Cajeros); i++)
		{
			int pos = (int)SendMessage(h_ListAC, LB_ADDSTRING, 0,
				(LPARAM)Cajeros[i].achName);
			SendMessage(h_ListAC, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListAC);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_L_AC_ListaCajeros: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_ListC = GetDlgItem(hwnd, IDC_L_AC_ListaCajeros);
				int lbItemC = (int)SendMessage(h_ListC, LB_GETCURSEL, 0, 0);
				int iC = (int)SendMessage(h_ListC, LB_GETITEMDATA, lbItemC, 0);

				TCHAR buff[MAX_PATH];
				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achUserName);
				SetDlgItemText(hwnd, IDC_E_AC_NombreUsuario, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achName);
				SetDlgItemText(hwnd, IDC_E_AC_NombreCompleto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achAlias);
				SetDlgItemText(hwnd, IDC_E_AC_Alias, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achPassword);
				SetDlgItemText(hwnd, IDC_E_AC_Contra, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achComercio);
				SetDlgItemText(hwnd, IDC_E_AC_Comercio, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cajeros[iC].achUsuario);
				SetDlgItemText(hwnd, IDC_E_AC_TipoUsu, buff);
				return TRUE;
			}
			}
		}
						   break;
		case IDC_B_AC_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_AC_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//-----------------------------------------------------------------------------------------------------------------------------CLIENTES

BOOL CALLBACK Pantalla_NuevoCliente(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_Ncliente_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_Ncliente_Regresar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ListaClientes(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_Listc = GetDlgItem(hwnd, IDC_LB_cli_Lista);
		for (int i = 0; i < ARRAYSIZE(Roster); i++)
		{
			int pos = (int)SendMessage(h_Listc, LB_ADDSTRING, 0,
				(LPARAM)Roster[i].achName);
			SendMessage(h_Listc, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_Listc);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_cli_Lista: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_Listc = GetDlgItem(hwnd, IDC_LB_cli_Lista);
				int lbItemc = (int)SendMessage(h_Listc, LB_GETCURSEL, 0, 0);
				int ic = (int)SendMessage(h_Listc, LB_GETITEMDATA, lbItemc, 0);

				TCHAR buff[MAX_PATH];

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achName);
				SetDlgItemText(hwnd, IDC_E_Lcliente_NombreCompleto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achAlias);
				SetDlgItemText(hwnd, IDC_E_Lcliente_Alias, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achPassword);
				SetDlgItemText(hwnd, IDC_E_Lcliente_Telefono, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achCorreo);
				SetDlgItemText(hwnd, IDC_E_Lcliente_Email, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achComercio);
				SetDlgItemText(hwnd, IDC_E_Lcliente_Comercio, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achDate);
				SetDlgItemText(hwnd, IDC_DTP_lcliente_Fecha, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_Lclientes_Actualizar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarCliente), hwnd, (DLGPROC)Pantalla_ActualizarClientes);
			break;
		case IDC_B_Lclientes_Eliminar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_BajaClientes), hwnd, (DLGPROC)Pantalla_BajaClientes);
			break;
		case IDC_B_Lclientes_Regresar:
			DestroyWindow(h_Ventanalc);
			return TRUE;
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		return TRUE;
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ActualizarClientes(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListAc = GetDlgItem(hwnd, IDC_L_ac_ListaClientes);
		for (int i = 0; i < ARRAYSIZE(Roster); i++)
		{
			int pos = (int)SendMessage(h_ListAc, LB_ADDSTRING, 0,
				(LPARAM)Roster[i].achName);
			SendMessage(h_ListAc, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListAc);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_L_ac_ListaClientes: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_Listc = GetDlgItem(hwnd, IDC_L_ac_ListaClientes);
				int lbItemc = (int)SendMessage(h_Listc, LB_GETCURSEL, 0, 0);
				int ic = (int)SendMessage(h_Listc, LB_GETITEMDATA, lbItemc, 0);

				TCHAR buff[MAX_PATH];

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achName);
				SetDlgItemText(hwnd, IDC_E_Acliente_NombreCompleto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achAlias);
				SetDlgItemText(hwnd, IDC_E_Acliente_Alias, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achPassword);
				SetDlgItemText(hwnd, IDC_E_Acliente_Telefono, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achCorreo);
				SetDlgItemText(hwnd, IDC_E_Acliente_Email, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achComercio);
				SetDlgItemText(hwnd, IDC_E_Acliente_Comercio, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Roster[ic].achDate);
				SetDlgItemText(hwnd, IDC_DTP_Acliente_Fecha, buff);
				return TRUE;
			}
			}
		}
								  break;
		case IDC_B_Acliente_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_Acliente_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_BajaClientes(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_Bcliente_Eliminar:
			//MessageBox(NULL, (LPCWSTR)L"Esta seguro de borrar el usuario", (LPCWSTR)L"Aviso", MB_ICONWARNING);
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Advertencia_Borrar), hwnd, (DLGPROC)Pantalla_AdvertenciaBorrar);
			break;
		case IDC_B_Bcliente_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//--------------------------------------------------------------------------------------------------------------------------PROMOCIONES

BOOL CALLBACK Pantalla_NuevaPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_NP_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_NP_Regresar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ListaPromo(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListP = GetDlgItem(hwnd, IDC_LB_P_Lista);
		for (int i = 0; i < ARRAYSIZE(Promos); i++)
		{
			int pos = (int)SendMessage(h_ListP, LB_ADDSTRING, 0,
				(LPARAM)Promos[i].achName);
			SendMessage(h_ListP, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListP);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_P_Lista: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_ListP = GetDlgItem(hwnd, IDC_LB_P_Lista);
				int lbItemP = (int)SendMessage(h_ListP, LB_GETCURSEL, 0, 0);
				int iP = (int)SendMessage(h_ListP, LB_GETITEMDATA, lbItemP, 0);

				TCHAR buff[MAX_PATH];

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Promos[iP].achName);
				SetDlgItemText(hwnd, IDC_E_LPromo_NombrePromo, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Promos[iP].achmonto);
				SetDlgItemText(hwnd, IDC_E_LPromo_Monto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Promos[iP].achporcentaje);
				SetDlgItemText(hwnd, IDC_E_LPromo_Descuento, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_LP_Actualizar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_ActualizarPromocion), hwnd, (DLGPROC)Pantalla_ActualizarPromo);
			break;
		case IDC_B_LP_Eliminar:
			DialogBox(NULL, MAKEINTRESOURCE(IDD_D_BajaPromocion), hwnd, (DLGPROC)Pantalla_BajaPromo);
			break;
		case IDC_B_LP_Regresar:
			DestroyWindow(h_VentanaLP);
			return TRUE;
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		return TRUE;
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_BajaPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListPBaja = GetDlgItem(hwnd, IDC_LB_Pbaja_Lista);
		for (int i = 0; i < ARRAYSIZE(Roster); i++)
		{
			int pos = (int)SendMessage(h_ListPBaja, LB_ADDSTRING, 0,
				(LPARAM)Roster[i].achName);
			SendMessage(h_ListPBaja, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListPBaja);
		return TRUE;
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_Pbaja_Lista: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_ListPBaja = GetDlgItem(hwnd, IDC_LB_Pbaja_Lista);
				int lbItemPBaja = (int)SendMessage(h_ListPBaja, LB_GETCURSEL, 0, 0);
				int iPb = (int)SendMessage(h_ListPBaja, LB_GETITEMDATA, lbItemPBaja, 0);

				TCHAR buff[MAX_PATH];

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Promos[iPb].achName);
				SetDlgItemText(hwnd, IDC_E_BPromo_NombrePromo, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Promos[iPb].achmonto);
				SetDlgItemText(hwnd, IDC_E_BPromo_Monto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Promos[iPb].achporcentaje);
				SetDlgItemText(hwnd, IDC_E_BPromo_Descuento, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_BP_Eliminar:
			//MessageBox(NULL, (LPCWSTR)L"Esta seguro de borrar el usuario", (LPCWSTR)L"Aviso", MB_ICONWARNING);
			DialogBox(NULL, MAKEINTRESOURCE(IDD_Advertencia_Borrar), hwnd, (DLGPROC)Pantalla_AdvertenciaBorrar);
			break;
		case IDC_B_BP_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ActualizarPromo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg) {
	case WM_CREATE:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_INITDIALOG:
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_AP_Actualizar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_AP_Regresar:
			EndDialog(hwnd, wParam);
			break;
		case IDCANCEL:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

//----------------------------------------------------------------------------------------------------------------------------CONSUMOS

BOOL CALLBACK Pantalla_NuevoConsumo(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_B_NConsumo_Guardar:
			EndDialog(hwnd, wParam);
			break;
		case IDC_B_NConsumo_Regresar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_ListaConsumo(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		h_ListConsumo = GetDlgItem(hwnd, IDC_LB_ListadoConsumo);
		for (int i = 0; i < ARRAYSIZE(Cons); i++)
		{
			int pos = (int)SendMessage(h_ListConsumo, LB_ADDSTRING, 0,
				(LPARAM)Cons[i].achConsumo);
			SendMessage(h_ListConsumo, LB_SETITEMDATA, pos, (LPARAM)i);
		}
		SetFocus(h_ListConsumo);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_LB_ListadoConsumo: {
			switch (HIWORD(wParam)) {
			case LBN_SELCHANGE:
			{
				h_ListConsumo = GetDlgItem(hwnd, IDC_LB_ListadoConsumo);
				int lbItemConsumo = (int)SendMessage(h_ListConsumo, LB_GETCURSEL, 0, 0);
				int iConsumo = (int)SendMessage(h_ListConsumo, LB_GETITEMDATA, lbItemConsumo, 0);

				TCHAR buff[MAX_PATH];

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%s"),
					Cons[iConsumo].achNameCliente);
				SetDlgItemText(hwnd, IDC_E_LConsumo_Cliente, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Cons[iConsumo].achmonto);
				SetDlgItemText(hwnd, IDC_E_LConsumo_Monto, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Cons[iConsumo].achsubtotal);
				SetDlgItemText(hwnd, IDC_E_LConsumo_Subtotal, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					Cons[iConsumo].achdescuento);
				SetDlgItemText(hwnd, IDC_E_LConsumo_Descuento, buff);

				StringCbPrintf(buff, ARRAYSIZE(buff),
					TEXT("%d"),
					(Cons[iConsumo].achsubtotal - Cons[iConsumo].achdescuento));
				SetDlgItemText(hwnd, IDC_E_LConsumo_Total, buff);
				return TRUE;
			}
			}
		}
			break;
		case IDC_B_LConsumo_Guardar:
			DestroyWindow(h_VentanaLConsumo);
			return TRUE;
			break;
		case IDC_B_LConsumo_Regresar:
			DestroyWindow(h_VentanaLConsumo);
			return TRUE;
			break;
		case IDCANCEL:
			DestroyWindow(hwnd);
			return TRUE;
			break;
		}
		break;
	case WM_CLOSE:
		DestroyWindow(hwnd);
		return TRUE;
		break;
	}
	return FALSE;
}

//----------------------------------------------------------------------------------------------------------ADVERTENCIAS

BOOL CALLBACK Pantalla_AdvertenciaBorrar(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case ID_Advertencia_B_Aceptar:
			EndDialog(hwnd, wParam);
			break;
		case ID_Advertencia_B_Cancelar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}

BOOL CALLBACK Pantalla_AdvertenciaSalir(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	switch (uMsg)
	{
	case WM_INITDIALOG:
		SetWindowLongPtr(hwnd, GWL_STYLE, GetWindowLongPtr(hwnd, GWL_STYLE) & ~WS_SYSMENU);
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case ID_Advertencia_Exit_Aceptar:
			EndDialog(hwnd, wParam);
			PostQuitMessage(0);
			break;
		case ID_Advertencia_Exit_Cancelar:
			EndDialog(hwnd, wParam);
			break;
		}
		break;
	case WM_CLOSE:
		EndDialog(hwnd, wParam);
		break;
	}
	return FALSE;
}
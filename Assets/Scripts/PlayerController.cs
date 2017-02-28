using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float speed;

	private Rigidbody rb;

	void Start ()
	{
		rb = GetComponent<Rigidbody>();
	}

	void FixedUpdate(){
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.AddForce (movement * speed);
	}


	Animator anim;

	void Awake()
	{
		anim = GetComponent<Animator>();

	}

	public void Att()
	{
		anim.SetBool("Attack", false);
	}

	public void KickOver()
	{
		anim.SetBool("LowKick", false);
	}

	public void DeathOver()
	{
		anim.SetBool("isDeath", false);
	}
	public void DeathOver2()
	{
		anim.SetBool("isDeath2", false);
	}
	public void HitOver()
	{
		anim.SetBool("HitStrike", false);
	}
	public void DamageOver ()
	{
		anim.SetBool("isDamage", false);
	}
}
